package MicroOppnet_V_5;

import java.awt.List;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;

import javax.bluetooth.LocalDevice;
import javax.bluetooth.RemoteDevice;

import OVM_Primitives.OVM_Primitives_Java.*;


public class Tablet1_Main {
	

	public static void main (String [] args ) throws Exception {
		   
		    
			ArrayList <String> DeviceApps = new ArrayList <String> ();
			DeviceApps.add("Display Msg");
			boolean OPP;
			String response;
	
	        
	        String NodeID = "Unknown";
	        RemoteDevice CandidateNode;
			Regular_PC h = new Regular_PC();
	        Regular_PC_BT hlbt = new Regular_PC_BT();
	        Regular_PC_UART uart = new Regular_PC_UART();

	        Discovery1 d1 = new Discovery1();
	        Vector devices = new Vector();
	        RemoteDevice InvitingNode = null;
	        RemoteDevice JoinedNode = null;
    		boolean Done = false;
    		String responseToInvite = "";
			boolean admitted_HLPR = false;

	        
	        //get BT name and address of current device
	        LocalDevice localDevice = LocalDevice.getLocalDevice();
			String localBTname = localDevice.getFriendlyName();
			String localBTaddress = localDevice.getBluetoothAddress();
	        NodeID = localBTaddress;
   		   System.out.print("current address = ");
   		   System.out.println(NodeID);
   		   System.out.print("current name = ");
   		   System.out.println(localBTname);




	        //listen to incoming connections
	        response = hlbt.NODE_listen("");
      		if( response.equalsIgnoreCase("Invite")){
      		   InvitingNode = hlbt.rem;
      		   System.out.println("Inviting node ");
      		   System.out.println(hlbt.rem.getFriendlyName(true));
      		}
	       
			//Join Oppnet
			hlbt.NODE_joinOppnet(InvitingNode);
			//wait for admission
	        response = hlbt.NODE_listen("");
	        if(response.equalsIgnoreCase("Admit")){
				//receive tasks
				String Oppnetasks = hlbt.NODE_receiveTask("Oppnet.txt");
				int Pos = Oppnetasks.indexOf("_Urgent");
				String UrgentTask = Oppnetasks.substring(0, Pos);
		   		System.out.print("Urgent task = ");
		   		System.out.println(UrgentTask);

				FileWriter fw = new FileWriter("Oppnet.txt", true);
		        // Current node adds itself to Oppnet file
				fw.append(NodeID);
				fw.close();
		   		
				//receive report
				String r= hlbt.NODE_listen("PersonFile.txt");
				System.out.println(r);
				ArrayList <String> DeviceTasks = new ArrayList<String>();
				
	            //check if the helper apps match any of the tasks
	            for(int i= 0; i<DeviceApps.size(); i++){
	            	if (Oppnetasks.contains(DeviceApps.get(i))){
	            		DeviceTasks.add(DeviceApps.get(i));
	            		
	            	}
	            	System.out.println(DeviceTasks);
	            	}
	            for(int i = 0; i<DeviceTasks.size(); i++){
	            	
	            	if (DeviceTasks.get(i).equals("Display Msg")){
	            	   h.NODE_runApp("Display Msg", "PersonFile.txt");}
	            	if (DeviceTasks.get(i).equals(UrgentTask)){
	            		Done = true;
	            	}
	            
	            }
	           
	           //while not done with urgent task forward tasks to nearest devices
	          //scan for BT devices to forward the tasks and files 
	            //send to radio devices
	           
	            	if(!Done){
	            	 devices =  hlbt.NODE_scan();
	                 
	                 int nomOfBTDevices = devices.size();
	                 d1.vecDevices = devices;
	                 int countOfCandHlprs = 0;
	                if (nomOfBTDevices>0){
	                 for(int i = 0; i<nomOfBTDevices; i++){
	                   RemoteDevice dev = (RemoteDevice) d1.vecDevices.elementAt(i);
	                   //the next if is added just for testing (so we don't invite strangers devices)
	                   if (dev.getFriendlyName(true).equals("ubuntu-0")){
	               	     OPP = hlbt.NODE_discover(i);
	               	      if (OPP){
	               		  CandidateNode = (RemoteDevice)devices.elementAt(i);
	               		  boolean member = h.NODE_is_member(CandidateNode.getBluetoothAddress());
	                 		  if (!member){
	                      		hlbt.NODE_reqHelp(CandidateNode);
	                      		countOfCandHlprs = countOfCandHlprs +1;
	                 		  	}
	                 		
	               	      }
	               	      break;
	               	      }}
	                	  if(countOfCandHlprs > 0){
	                 		responseToInvite = hlbt.NODE_listen("");
	                 		//wait for a certain amount of time if no devices join send task to radio devices
	                 		Thread.sleep(30000);
	                 		if( responseToInvite.equalsIgnoreCase("Join")){
	                 		   JoinedNode = hlbt.rem;
	                 		   System.out.println("Device JOINED");
	                 		   System.out.println(hlbt.rem.getFriendlyName(true));    
	                 		   //Thread.sleep(1000);
	                 		   admitted_HLPR = hlbt.NODE_evaluateAdmit(JoinedNode);
	                 		   if (admitted_HLPR){
				           	   hlbt.NODE_sendData("Oppnet.txt", JoinedNode);
				           	   Thread.sleep(1000);
				           	   hlbt.NODE_report("PersonFile.txt", JoinedNode);
				           	   String answer = hlbt.NODE_listen("");
				           	   if (answer.equals("Request Release")){
				           			System.out.println("Device request release");
				           			Thread.sleep(1000);
				           			hlbt.NODE_release(JoinedNode);
				           			Done  = true;
				           		//	break;
				           	   }
	                 		   }// end if admitted_HLPR
	           			}///end if responseToInvite == join
	                }// end if countOfCandHlprs>0	
	           			
	           		}// end if nomofBTdevices >0
	             if((nomOfBTDevices ==0) ||(countOfCandHlprs==0) || (!(responseToInvite.equals("Join"))) || (!admitted_HLPR)){
	             //send to radio through BS
	            	 System.out.println("No BT devices, conneting to Zigbee devices..");
	       		     boolean admitted = false;
	       	     //   UART uart1 = new UART();

	       		     Process p = null;

	       			 p =  uart.NODE_reqHelp(p);

	       		     
	             } // end  if((nomOfBTDevices ==0)||(countOfCandHlprs==0)||(!(responseToInvite.equals("Join"))) || (!admitted_HLPR))
	           }// end while(!Done)
	            	
	           // request release from inviting node through BT 	
	           hlbt.NODE_reqRelease(InvitingNode);
    		   response =hlbt.NODE_listen("");
    		   if( response.equalsIgnoreCase("Release")){
    			 System.out.println("Released from Oppnet operations !");
    			}
	           
	     	   }//end if admitted
	
		}}
	
