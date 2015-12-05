package OVM_Primitives.OVM_Primitives_Java;

import java.io.*;
import java.net.*;
import java.util.ArrayList;

import org.apache.commons.net.ftp.FTP;
import org.apache.commons.net.ftp.FTPClient;

public class Regular_PC_WiFi extends Regular_PC {
	
	public ServerSocket serverSocket;
	
	public String NODE_listen() throws IOException{
        serverSocket = new ServerSocket(15123);
	    System.out.println("Listening...");
	
	    Socket socket = serverSocket.accept();
	    //System.out.println("Accepted connection : " + socket);
	    BufferedReader in = null;
	    String message = null;

	    in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        message= (String)in.readLine();
        System.out.println("Remote Node Says> " + message);
        return message;
	}
	
	/*public Socket NODE_listen() throws IOException{
        serverSocket = new ServerSocket(15123);
	    System.out.println("Waiting for connection");
	
	    Socket socket = serverSocket.accept();
	    System.out.println("Accepted connection : " + socket);
	    
	    
	    return socket;
	}*/
	public void NODE_runApp_retrieveReading(){
		String server = "homepages.wmich.edu";
        int port = 21;
        String user = "mnn7262";
        String pass = "";
 
        FTPClient ftpClient = new FTPClient();
        try {
 
            ftpClient.connect(server, port);
            ftpClient.login(user, pass);
            ftpClient.enterLocalPassiveMode();
            ftpClient.setFileType(FTP.BINARY_FILE_TYPE);
 
            // APPROACH #1: using retrieveFile(String, OutputStream)
            String remoteFile1 = "testUpload1.txt";
            File downloadFile1 = new File("testdownload.txt");
            OutputStream outputStream1 = new BufferedOutputStream(new FileOutputStream(downloadFile1));
            boolean success = ftpClient.retrieveFile(remoteFile1, outputStream1);
            outputStream1.close();
 
            if (success) {
                System.out.println("File #1 has been downloaded successfully.");
            }
 
        } catch (IOException ex) {
            System.out.println("Error: " + ex.getMessage());
            ex.printStackTrace();
        } finally {
            try {
                if (ftpClient.isConnected()) {
                    ftpClient.logout();
                    ftpClient.disconnect();
                }
            } catch (IOException ex) {
                ex.printStackTrace();
            }
        }
	}
	public void NODE_runApp_logReading(String filename) throws IOException{
		BufferedReader br = new BufferedReader(new FileReader(filename));
		  
		   String line = br.readLine();
		   String st = "";
		   while (line != null) {
		            
		      st = st +line;
		       line = br.readLine();
		        }

		        br.close();
		       int pos1 = st.indexOf("server=");
		       int pos2 = st.indexOf("user=");
		       int pos3 = st.indexOf("pass=");
		       int pos4 = st.indexOf(";");
		       String server = st.substring(pos1+7, pos2 -2);
		       String user = st.substring(pos2+5, pos3-2);
		       String pass = st.substring(pos3+5, pos4);
	//	String server = "webpages.charter.net";
	//	String user = "mduailij";
	//	String pass = "Welcome1";
	
	        int port = 21;
	  
	 
	        FTPClient ftpClient = new FTPClient();
	        try {
	 
	            ftpClient.connect(server, port);
	            ftpClient.login(user, pass);
	            ftpClient.enterLocalPassiveMode();
	 
	            ftpClient.setFileType(FTP.BINARY_FILE_TYPE);
	 
	            // APPROACH #1: uploads first file using an InputStream
	            File firstLocalFile = new File(filename);
	 
	            String firstRemoteFile = filename;
	            InputStream inputStream = new FileInputStream(firstLocalFile);
	 
	            System.out.println("Start uploading "+ filename);
	            boolean done = ftpClient.storeFile(firstRemoteFile, inputStream);
	            inputStream.close();
	            if (done) {
	                System.out.println(filename + " is uploaded successfully.");
	            }
	 
	        } catch (IOException ex) {
	            System.out.println("Error: " + ex.getMessage());
	            ex.printStackTrace();
	        } finally {
	            try {
	                if (ftpClient.isConnected()) {
	                    ftpClient.logout();
	                    ftpClient.disconnect();
	                }
	            } catch (IOException ex) {
	                ex.printStackTrace();
	            }
	        }
	    
	}
	
	public ArrayList<String> NODE_processMSG(String pathname) throws IOException{
		//********** Not used yet
		
		// save the read values to a list, so they're not limited to just two values
		String line;
		
		ArrayList<String> MsgValues = new ArrayList<String>();
		BufferedReader reader = new BufferedReader(new FileReader(pathname));
		while((line = reader.readLine()) != null){
			MsgValues.add(line);
			}
		return MsgValues;
	}	
	
	
	
	public void NODE_validate(String filename,String[] args, Socket socket, String task, ServerSocket serverSocket, String reading) throws IOException, InterruptedException{
    
		Regular_PC_BT  RPC_BT = new Regular_PC_BT();

		switch (task){
        case "report IP": 
            Socket s_report = serverSocket.accept();
        	NODE_report(s_report, filename);
        	break; 	
        
        case "scan BT":    	
        	RPC_BT.NODE_scan();	
        	break;
        	
        case "log reading":
        	NODE_runApp_logReading(reading);
        	break;
        case "retrieve reading":
        	NODE_runApp_retrieveReading(); 
        	break;   	
        case "bye":
        	break;
        default: System.out.println("Invalid choice");
        }
     serverSocket.close();
}
	
	
	public Socket NODE_startConnect(String host, String message) throws UnknownHostException, IOException{	
        Socket socket = null;
		socket = new Socket(host ,15123);
		System.out.println("Sending "+ message);
		return socket;			
	}	
	
	public ServerSocket get_serverSocket(){
		return serverSocket;
	}

	
	public String NODE_receiveTask(Socket socket) throws IOException{
		//PrintStream out = null;
		BufferedReader in = null;
	    String command = null;

	    in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        command = (String)in.readLine();
        System.out.println("Inviting Node says> " + command);
        return command;
	    
	}
	
	public void NODE_report(Socket socket, String filename) throws IOException{
		File transferFile = new File (filename);
		byte [] bytearray = new byte [(int)transferFile.length()];
		FileInputStream fin = new FileInputStream(transferFile);
		BufferedInputStream bin = new BufferedInputStream(fin);
		bin.read(bytearray,0,bytearray.length);
		OutputStream os = socket.getOutputStream();
		System.out.println("Sending Files...");
		os.write(bytearray,0,bytearray.length);
		os.flush();
		os.close();
		fin.close();
		bin.close();
		//socket.close();
		System.out.println("File " +filename+" transfer complete");
		//serverSocket.close();

	}
	
	public void NODE_receive_report(Socket s_report, String filename) throws IOException{
		int filesize=1022386; int bytesRead; int currentTot = 0;
		byte [] bytearray = new byte [filesize];
		InputStream is = s_report.getInputStream();
		FileOutputStream fos = new FileOutputStream(filename);
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
		is.close();
	//	s_report.close();
		System.out.println("File " +filename+" received!");
		}
	
	public void NODE_sendTask(String task_IP, String host) throws UnknownHostException, IOException{	
		PrintWriter s_out = null; 
		Socket socketWithHLPR;
	   
	    socketWithHLPR = this.NODE_startConnect(host, "task");
	    s_out = new PrintWriter(socketWithHLPR.getOutputStream(), true);
	    s_out.println(task_IP);
		
		//socket.close();

	}
	
	public Socket NODE_join(String host) throws UnknownHostException, IOException{	
		PrintWriter s_out = null; 
		Socket socket;
		String message= "Join";
	   
	    socket = this.NODE_startConnect(host, message);
	    s_out = new PrintWriter(socket.getOutputStream(), true);
	    s_out.println(message);
		return socket;
		//socket.close();

	}
	public Socket NODE_reqHelp(String host) throws UnknownHostException, IOException{	
		PrintWriter s_out = null; 
		Socket socket;
		String message= "ReqHelp";
	   
	    socket= this.NODE_startConnect(host, message);
	    s_out = new PrintWriter(socket.getOutputStream(), true);
	    s_out.println(message);
		return socket;
		//socket.close();

	}
	public Socket NODE_release(String host) throws UnknownHostException, IOException{	
		PrintWriter s_out = null; 
		Socket socket;
		String message= "Release";
	   
	    socket= this.NODE_startConnect(host, message);
	    s_out = new PrintWriter(socket.getOutputStream(), true);
	    s_out.println(message);
		return socket;
		//socket.close();

	}
	public Socket NODE_reqRelease(String host) throws UnknownHostException, IOException{	
		PrintWriter s_out = null; 
		Socket socket;
		String message= "ReqRelease";

	    socket = this.NODE_startConnect(host, message);
	    s_out = new PrintWriter(socket.getOutputStream(), true);
	    s_out.println(message);
		return socket;
		//socket.close();

	}
	public Socket NODE_admit(String host) throws UnknownHostException, IOException{	
		PrintWriter s_out = null; 
		Socket socket;
		String message= "Admit";

	    socket = this.NODE_startConnect(host, message);
	    s_out = new PrintWriter(socket.getOutputStream(), true);
	    s_out.println(message);
		return socket;
		//socket.close();

	}
	
	public boolean NODE_evaluateAdmit(String NodeId) throws UnknownHostException, IOException{
		boolean admitted = false;
		if (NODE_is_member(NodeId) == false){
			admitted = true;
		}
		return admitted;
		//check the comments in Seed_Validate, can be done without interference from CC
	
}

}

