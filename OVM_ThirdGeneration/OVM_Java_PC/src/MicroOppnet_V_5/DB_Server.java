package MicroOppnet_V_5;

import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.ArrayList;

import OVM_Primitives.OVM_Primitives_Java.*;

public class DB_Server {

	
	public static void main(String[] args) throws IOException, InterruptedException {
		Socket socket;
        String task;
        ServerSocket serverSocket;
        String reading = null;
		Regular_PC_WiFi hlw = new Regular_PC_WiFi();
		String host = "192.168.1.6";
		String message;
		boolean Done = false;
		boolean found_task = false;
		
		 ArrayList <String> DeviceApps = new ArrayList <String> ();
	     DeviceApps.add("Log reading to DB");
	     ///////////////////////////////////////////////////////
	
        message =  hlw.NODE_listen();
        serverSocket = hlw.get_serverSocket();

       //////////////////////////////////////////////
      if(message.equals("ReqHelp")){
          serverSocket.close();

    	  socket =  hlw.NODE_join(host);
        
    	   socket.close();
        
	   Thread.sleep(1000);

         //listen for admission notification
          message =  hlw.NODE_listen();
          serverSocket = hlw.get_serverSocket();
          serverSocket.close();
          if(message.equals("Admit")){
        	   System.out.println("OK");
        	   Thread.sleep(1000);
        	   //Step 1: receive report (oppnet file)
       		   socket = new Socket(host ,15123);       	
       	     //  hlw.NODE_receive_report(socket, "Oppnet.txt");

               hlw.NODE_receive_report(socket, "MyPersonFile.txt");
               socket.close();
               
               //Step 2: add itself to oppnet file
              
               FileWriter fw = new FileWriter("Oppnet.txt", true);
       		   fw.append("\n DB_Server");
       		   fw.close();
               
       		 
               
         //Step 4: read oppnet tasks to see which one it can perform
           
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
   	            	
   	            	if (DeviceTasks.get(i).equals("Log reading to DB")){
   	            		found_task = true;
   			   	     	System.out.println("found task");
   	            	}
   	            	  
   	            	if (DeviceTasks.get(i).equals(UrgentTask)){
   	            		Done = true;
   			   	     	System.out.println("i'm done");

   	            	}
   	            
   	            }
   	           
   	        if (found_task){
               
               //Step 5: log the reading
               hlw.NODE_runApp_logReading("MyPersonFile.txt");
               
               //Step 6: Request release        	
   	       	   socket =  hlw.NODE_reqRelease(host);
              //serverSocket.close();
       	       socket.close();
           
   	           Thread.sleep(1000);

            //listen for release notification
               message =  hlw.NODE_listen();
               serverSocket = hlw.get_serverSocket();
               serverSocket.close();
   	            
   	            }
          } // end if(message.equals("Admit")
      } // end if(message.equals("ReqHelp")

   //////////////////////////////////////////////
       
  
      // socket.close();

		
	}

}
