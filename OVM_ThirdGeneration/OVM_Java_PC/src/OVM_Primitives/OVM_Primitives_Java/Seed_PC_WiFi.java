package OVM_Primitives.OVM_Primitives_Java;

import java.net.*;
import java.util.ArrayList;
import java.io.*;

public class Seed_PC_WiFi extends Seed_PC {

		public ServerSocket serverSocket;
		
		
		
		public ArrayList<String> NODE_processMSG(String pathname) throws IOException{
			// save the read values to a list, so they're not limited to just two values
			String line;
			
			ArrayList<String> MsgValues = new ArrayList<String>();
			BufferedReader reader = new BufferedReader(new FileReader(pathname));
			while((line = reader.readLine()) != null){
				MsgValues.add(line);
				}
			return MsgValues;
		}
		public void NODE_saveMsg(String PathName, String first, String second) throws FileNotFoundException, UnsupportedEncodingException{
			
			// String PathName = "the-file-name.txt";
			 PrintWriter writer = new PrintWriter(PathName, "UTF-8");
		     writer.println(first);
		     writer.println(second);
		     writer.close();

		     
		}
		
		
		public void SEED_validate(String[] args, String command, Socket socket, ServerSocket serverSocket) throws IOException, InterruptedException{
	    	Seed_PC_BT SeedPCBT = new Seed_PC_BT();
	    	Seed_PC_UART SeedPCUART = new Seed_PC_UART();


			switch (command){
	        case "report IP": 
	            Socket s_report = serverSocket.accept();
	        	NODE_report(s_report);
	        	break; 	
	        
	        case "scan BT":    	
	        	SeedPCBT.NODE_scan();
	        	break;
	        case "send task UART":
		        System.out.println("CC should enter task now ");

	        	String task_UART, port;
	        	
		        
	        	task_UART = NODE_receiveTask(socket);
		        System.out.println("CC should enter port number now ");
		        port = NODE_receiveTask(socket);
		       NODE_saveMsg("UART_Msg.txt",task_UART, port);

		    break; 
		        // then in Seed_laptop_client_main call SEED_Process_MSG
		        //The following line should be in Seed_laptop_client_main after SEED_process_MSG
		       //// SeedLaptopUART.SEED_sendTask(task_UART, port);

	        case "send task IP":

	        	String task_IP, host;
		        System.out.println("CC should enter task now ");
		        task_IP = NODE_receiveTask(socket);
		        System.out.println("CC should enter host now ");
		        host = NODE_receiveTask(socket);
		        NODE_saveMsg("IP_Msg.txt", task_IP, host);
		        
		        // then in Seed_laptop_client_main call SEED_Process_MSG
		        //The following line should be in Seed_laptop_client_main after SEED_process_MSG
		        ////SEED_sendTask(task_IP, host);       

			break;  
	        case "hello":
	        	break;
	        	
	        case "bye":
	        	break;
	        default: System.out.println("Invalid choice");
	        }
	 //    serverSocket.close(); changed here 

		}
		
		
		public Socket NODE_listen() throws IOException{
	        serverSocket = new ServerSocket(15123);
		    System.out.println("Waiting for connection");
		
		    Socket socket = serverSocket.accept();
		    System.out.println("Accepted connection : " + socket);
		    
		    
		    return socket;
		}
		
		public ServerSocket get_serverSocket(){
			return serverSocket;
		}
		
		public String NODE_receiveTask(Socket socket) throws IOException{
			//PrintStream out = null;
			BufferedReader in = null;
		    String command = null;
			//out = new PrintStream(socket.getOutputStream());
		    //out.println("Seed says> Welcome, please enter your command"); 
		    ///out.flush();
		    in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
	        command = (String)in.readLine().toString();
	        System.out.println("CC says> " + command);
	        return command;
		    
		}
		
		public void NODE_report(Socket socket) throws IOException{
			File transferFile = new File ("Document.txt");
			byte [] bytearray = new byte [(int)transferFile.length()];
			FileInputStream fin = new FileInputStream(transferFile);
			BufferedInputStream bin = new BufferedInputStream(fin);
			bin.read(bytearray,0,bytearray.length);
			OutputStream os = socket.getOutputStream();
			System.out.println("Sending Files...");
			os.write(bytearray,0,bytearray.length);
			os.flush();
			//socket.close();
			System.out.println("File transfer complete");
			//serverSocket.close();

		}
		
		public Socket NODE_startConnect(String host) throws UnknownHostException, IOException{	
	        Socket socket = null;
			socket = new Socket(host ,15123);
			System.out.println("Connected");
			return socket;			
		}	
		
		
		public void NODE_receive_report(Socket s_report) throws IOException{
			int filesize=1022386; int bytesRead; int currentTot = 0;
			byte [] bytearray = new byte [filesize];
			InputStream is = s_report.getInputStream();
			FileOutputStream fos = new FileOutputStream("copy");
			BufferedOutputStream bos = new BufferedOutputStream(fos);
			bytesRead = is.read(bytearray,0,bytearray.length);
			currentTot = bytesRead;
			do {
				//System.out.println(bytesRead);

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
		
		public void NODE_sendTask(String task_IP, String host) throws UnknownHostException, IOException{	
			PrintWriter s_out = null; 
			Socket socketWithHLPR;
		   
		    socketWithHLPR = this.NODE_startConnect(host);
		    s_out = new PrintWriter(socketWithHLPR.getOutputStream(), true);
		    s_out.println(task_IP);
			
			//socket.close();

		}	
		
		public void NODE_evaluateAdmit(String task_IP, String host, String NodeId) throws UnknownHostException, IOException{
			if (NODE_is_member(NodeId) == false){
				NODE_sendTask(task_IP, host);
			}
			
			//check the comments in Seed_Validate, can be done without interference from CC
		
	}
}




