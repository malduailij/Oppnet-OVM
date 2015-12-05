package OVM_Primitives.OVM_Primitives_Java;

import java.io.*;
import java.net.UnknownHostException;
import java.util.Vector;

import javax.bluetooth.RemoteDevice;

public class Regular_PC_BT extends Regular_PC {
		public RemoteDevice rem;
		BT_Client clt = new BT_Client();
		RemoteDeviceDiscovery rddis = new RemoteDeviceDiscovery();
		Discovery1 d = new Discovery1();
		Laptop_BT_Server1 serv = new Laptop_BT_Server1();
		
		public Vector NODE_scan() throws IOException, InterruptedException {
			Vector devices = new Vector();
			System.out.println("Scanning for BT helpers...");
			RemoteDeviceDiscovery.main(null);
			devices = rddis.devicesDiscovered;
			return devices;
		}
		
		public boolean NODE_discover(int index) throws IOException {
			boolean OPP;
			System.out.println("Scearching for OPP service...");

			OPP = d.discoverBT(index);
			if (OPP) System.out.println("BT helper supports OPP!");
			else {if(!OPP) System.out.println("BT helper DOES NOT support OPP!");}
			return OPP;
		}
		
		public void NODE_sendData(String Data, RemoteDevice rd) throws IOException{
			System.out.println("Sending data to Oppnet device...");

			clt.client_side(Data,"", rd);
			
		}
		public void NODE_joinOppnet(RemoteDevice rd) throws IOException{
			String st = "Join\r\n";
			System.out.println("Joining Oppnet...");

			clt.client_side("",st, rd);
			
		}
		
		
		public String NODE_listen(String filename) throws IOException{
			//Helper as a server
			String response;
			System.out.println("Listening...");

			response = serv.server_side(filename);
		    rem = serv.dev;
			return response;
		}
/*
		public void HLPR_startConnect(String[] args) throws IOException{
			//HLPR as a client
			Laptop_BT_Client.main(args);
		}
	*/	
		public String NODE_receiveTask(String filename) throws IOException{
			//Helper as a server
			String response;
			System.out.println("Waiting for tasks...");

			response = serv.server_side(filename);
		    rem = serv.dev;
			return response;
		}
		

		public boolean NODE_evaluateAdmit(RemoteDevice CandidateNode) throws UnknownHostException, IOException{
	     	String st = "Admit\r\n";
	     	boolean admitted = true;
			System.out.println("Sending evaluation for admission...");

			clt.client_side("",st, CandidateNode);
			return admitted;

		}
		
		public void NODE_reqHelp(RemoteDevice CandidateNode) throws UnknownHostException, IOException{
	     	String st = "Invite\r\n";
			System.out.println("Requesting help..Sending invitation to join Oppnet...");

			clt.client_side("",st, CandidateNode);

		}
		
		public void NODE_report(String filename, RemoteDevice rd) throws IOException{
			/*
			BufferedReader br = new BufferedReader(new FileReader(filename));
			String info = "";
	        String line = br.readLine();
	        while (line != null) {
	            
	            info = info +line +"\n";
	            line = br.readLine();
	        }

	        br.close();*/
			System.out.println("Sending a report...");

			clt.client_side(filename,"", rd);
			
		}
		
		public void NODE_reqRelease(RemoteDevice rd) throws IOException{
		
			String st = "Request Release\r\n";
			System.out.println("Sending a release request...");

			clt.client_side("",st, rd);
		}
		
		public void NODE_release(RemoteDevice rd) throws IOException{
			
			String st = "Release\r\n";
			System.out.println("Releasing Oppnet helper...");
			clt.client_side("",st, rd);
		}

}
