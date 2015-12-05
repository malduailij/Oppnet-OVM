package OVM_Primitives.OVM_Primitives_Java;

import java.io.*;
import java.net.*;

public class CC_Watch_WiFi extends CC_Watch{
	
	public void NODE_terminate(Socket socket) throws IOException{
		//Remove the comments from socket.close if there is a socket between CC and seed
		//socket.close();
		File file = new File("C:\\Users\\mai\\workspace\\OVM\\OppnetTree");     
	    String[] myFiles;
	    if (file.list().length > 0){
	            myFiles = file.list();  
	            for (int i=0; i<myFiles.length; i++) { 
	                File myFile = new File(file, myFiles[i]);   
	                myFile.delete();
	                
	            }
		  System.out.println("Oppnet has been terminated successfully!");
 
	         }
	    
	    else{
	    	System.out.println("Oppnet tree is empty!");
	    }
	    }
	
	public Socket NODE_initiate(String host) throws UnknownHostException, IOException{	
        Socket socket = null;
		socket = new Socket(host ,15123);
		System.out.println("Connected");
		return socket;			
	}		
	public void CTRL_close_socket(Socket socket) throws IOException{
		socket.close();
		
	}
	
	public String NODE_command(Socket socket) throws IOException{
		PrintWriter s_out = null; 
		
	    s_out = new PrintWriter(socket.getOutputStream(), true);
		String command; 
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    System.out.println("Please enter your command name :");
	    System.out.println("1. scan BT :");
	    System.out.println("2. report IP :");
	    System.out.println("3. send task UART :");
	    System.out.println("4. send task IP :");
	    System.out.println("5. log help message");
	    System.out.println("6. retrieve help message");


	    command= br.readLine();
		s_out.println(command);

		switch (command){
		case "report IP":
	    	Socket s_report;
			s_report =  NODE_initiate("192.168.1.5");
			NODE_receiveReport(s_report);   	
	    	break;
	    case "scan BT":
	    	break;
	    case "bye":
	    	break;   	
		case "send task UART":
			String port, taskUART;
			System.out.println("Please enter task :");
		    taskUART= br.readLine();
			s_out.println(taskUART);
		    System.out.println("Please enter port number :");
		    port= br.readLine();
			s_out.println(port);
			break;
		case "send task IP":
			String host, taskIP;
			System.out.println("Please enter task :");
		    taskIP= br.readLine();
			s_out.println(taskIP);
		    System.out.println("Please enter host :");
		    host= br.readLine();
			s_out.println(host);
			break;
		 default: System.out.println("invalid choice");
	    	break;

		}
		return command;
		
	}
	
	public void NODE_receiveReport(Socket s_report) throws IOException{
		int filesize=1022386; int bytesRead; int currentTot = 0;
		byte [] bytearray = new byte [filesize];
		InputStream is = s_report.getInputStream();
		FileOutputStream fos = new FileOutputStream("copy");
		BufferedOutputStream bos = new BufferedOutputStream(fos);
		bytesRead = is.read(bytearray,0,bytearray.length);
		currentTot = bytesRead;
		do {

			bytesRead = is.read(bytearray, currentTot, (bytearray.length-currentTot));
			if(bytesRead >= 0){

				currentTot += bytesRead; 
			    System.out.println("entered if");}

			} while(bytesRead > -1);
		
		bos.write(bytearray, 0 , currentTot);
		bos.flush();
		bos.close();
		s_report.close();
		System.out.println("report received!");
		}
}
