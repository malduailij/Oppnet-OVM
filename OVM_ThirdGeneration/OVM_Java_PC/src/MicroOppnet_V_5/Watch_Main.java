package MicroOppnet_V_5;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Vector;

import javax.bluetooth.LocalDevice;
import javax.bluetooth.RemoteDevice;

import OVM_Primitives.OVM_Primitives_Java.*;


public class Watch_Main {
public static void main (String [] args ) throws IOException, InterruptedException {
		
		boolean OPP;
		String response;
        
        String TasksOfOppnet = "Inform 911_Urgent, Upload file to ftp server, Display Msg, Log reading to DB";

		CC_Watch_BT clbt = new CC_Watch_BT();
        String NodeID = "Unknown";
        RemoteDevice CandidateNode;
		Seed_Watch sl = new Seed_Watch();
        Seed_Watch_BT1 slbt = new Seed_Watch_BT1();
        Discovery1 d1 = new Discovery1();
        Vector devices = new Vector();
        RemoteDevice JoinedNode = null;
        String responseToInvite = "";
		boolean admitted_HLPR = false;
        int countOfCandHlprs = 0;

        
        //get BT name and address of current device
        LocalDevice localDevice = LocalDevice.getLocalDevice();
		String localBTname = localDevice.getFriendlyName();
		String localBTaddress = localDevice.getBluetoothAddress();
        NodeID = localBTaddress;
        //Initiate Oppnet and add current node to Oppnet
        clbt.NODE_initiate(NodeID, TasksOfOppnet);
        
      //Scan for BT devices
      devices =  slbt.NODE_scan();
      
      int nomOfBTDevices = devices.size();
      d1.vecDevices = devices;

      if (nomOfBTDevices >0){

      for(int i = 0; i<nomOfBTDevices; i++){
    	RemoteDevice dev =  (RemoteDevice) d1.vecDevices.elementAt(i);
    	  
  	    if (dev.getFriendlyName(true).equals("ubuntu-0")){
    	  OPP = slbt.NODE_discover(i);
    	  if (OPP){
    		  CandidateNode = (RemoteDevice)devices.elementAt(i);
      		  if (!sl.NODE_is_member(CandidateNode.getBluetoothAddress())){
        		slbt.NODE_reqHelp(CandidateNode);
          		countOfCandHlprs = countOfCandHlprs +1;

    	       }
    	  }
    	  break;
    	  }} //end for
      if(countOfCandHlprs > 0){
    	  responseToInvite = slbt.NODE_listen("");
      		if( responseToInvite.equalsIgnoreCase("Join")){
      		   JoinedNode = slbt.rem;
      		   System.out.println("Device JOINED");
      		   System.out.println(slbt.rem.getFriendlyName(true));
      		
 
      	admitted_HLPR = slbt.NODE_evaluateAdmit(JoinedNode);
		Thread.sleep(1000);
	if(admitted_HLPR){
		slbt.NODE_sendTask("Oppnet.txt", JoinedNode);
	   Thread.sleep(1000);
	   slbt.NODE_report("PersonFile.txt", JoinedNode);
		String answer = slbt.NODE_listen("");
		if (answer.equals("Request Release")){
			System.out.println("Device requests release");
			Thread.sleep(1000);

			slbt.NODE_release(JoinedNode);
		}
	}// end if admitted_HLPR
      } // end if( responseToInvite.equalsIgnoreCase("Join"))
      }// end if(countOfCandHlprs > 0)
      }// end if (nomOfBTDevices >0)
		clbt.NODE_terminate();

}}