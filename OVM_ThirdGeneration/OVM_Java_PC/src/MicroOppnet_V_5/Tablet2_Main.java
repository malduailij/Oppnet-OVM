package MicroOppnet_V_5;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.ArrayList;

import OVM_Primitives.OVM_Primitives_Java.*;

public class Tablet2_Main {


	public static void main(String[] args) throws Exception {
		Regular_PC_WiFi hlw = new Regular_PC_WiFi ();
		String Candidate_Helper = "192.168.1.6";
		Socket socket = null;
        ServerSocket serverSocket;
        String message;
        boolean admitted = false;
        boolean Done = false;
        boolean found_task = false;
        ArrayList <String> DeviceApps = new ArrayList <String> ();
		DeviceApps.add("Upload file to ftp server");
        Regular_PC_UART uart1 = new Regular_PC_UART();
        String filename;
        boolean received = false;
        String resp;
		  Process p = null;
		  Process p1 = null;
		  Regular_PC hl = new Regular_PC();
		
			
		p1 = uart1.NODE_listen2(p1);
	    Thread.sleep(20000);
		
		File f;
		//filename = pathname + "reqHelp.txt";
		f = new File("Tab2/reqHelp.txt");
		while (!received){
		if (f.exists()){
			System.out.println("file is here");
		
         received = hl.NODE_processMSG("Tab2/reqHelp.txt", uart1.reqHelp);
        
		}
		}
		
		if (received){
		//	p1.destroy();
			System.out.println("received request for help" );
			

    
      //Step 2: add self to oppnet file
		FileWriter fw = new FileWriter("Oppnet.txt", true);
        // Current node adds itself to Oppnet file
		fw.append("\n Tablet2");
		fw.close();
		
      //Step 3: read oppnet tasks to see which one it can perform
        
		BufferedReader br = new BufferedReader(new FileReader("Oppnet.txt"));
		  String st;
		   String line = br.readLine();
		   String contents = "";
		   while (line != null) {
		            
		      contents = contents +line+" ";
		       line = br.readLine();
		        }

		        br.close();
		        st = contents;
		        //defining the urgent task from the oppnet file
		        int Pos = st.indexOf("_Urgent");
				String UrgentTask = st.substring(0, Pos);
		   		System.out.print("Urgent task = ");
		   		System.out.println(UrgentTask);
		        ArrayList <String> DeviceTasks = new ArrayList<String>(); 
		        
		        //check if the helper apps match any of the tasks
	            for(int i= 0; i<DeviceApps.size(); i++){
	            	if (st.contains(DeviceApps.get(i))){
	            		DeviceTasks.add(DeviceApps.get(i));
	            		
	            	}
	            	System.out.println(DeviceTasks);
	            	}
	            for(int i = 0; i<DeviceTasks.size(); i++){
	            	
	            	if (DeviceTasks.get(i).equals("Upload file to ftp server")){
	            		found_task = true;
			   	     	System.out.println("found task");
	            	}
	            	  
	            	if (DeviceTasks.get(i).equals(UrgentTask)){
	            		Done = true;
	            	}
	            
	            }
	           
		if (found_task){        
       //Step 4: do the upload
		socket = hlw.NODE_reqHelp(Candidate_Helper);
		socket.close();


		message=  hlw.NODE_listen();
	    serverSocket = hlw.get_serverSocket();
		  serverSocket.close();
  
	   Thread.sleep(1000);
	  if (message.equals("Join")) 
	    {

	    admitted = hlw.NODE_evaluateAdmit(Candidate_Helper);
	    if (admitted){
	    	System.out.println("admitted");
	    	socket = hlw.NODE_admit(Candidate_Helper);
			socket.close();
		    Thread.sleep(1000);
		    //sending PersonFile
		    serverSocket = new ServerSocket(15123);
			socket = serverSocket.accept();
			filename = "PersonFile.txt";
			hlw.NODE_report(socket, "PersonFile.txt");
		    serverSocket.close();
		   
		
		
		//Step 5a: listen to  release request from DB server	
		   message=  hlw.NODE_listen();
		    serverSocket = hlw.get_serverSocket();
		        
		    serverSocket.close();
		   Thread.sleep(1000);
		  
	    //Step 5b: send release notification to DB server	
		   if (message.equals("ReqRelease")) 
		    {
			   Thread.sleep(1000);
		    socket = hlw.NODE_release(Candidate_Helper);
		    socket.close();
		    }

	    
	    }// end if(admitted)
		} //end if message.equals("Join")
		}// end if(found_task)
		
		
	//	while(!Done){
	    // Step 6: while not done forward (Call Server for android)-- and get release from phone
	    server_for_android.main(args);
//	}
	
	 
		}// if(received)
		f.delete();
	}
	
	}
		

