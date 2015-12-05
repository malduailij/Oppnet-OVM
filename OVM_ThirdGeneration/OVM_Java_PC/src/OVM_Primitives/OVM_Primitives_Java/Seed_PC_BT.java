package OVM_Primitives.OVM_Primitives_Java;

import java.io.*;

import javax.bluetooth.RemoteDevice;

import java.net.UnknownHostException;
import java.util.Vector;

public class Seed_PC_BT extends Seed_PC {
	public RemoteDevice rem;
	BT_Client clt = new BT_Client();
	RemoteDeviceDiscovery rddis = new RemoteDeviceDiscovery();
	Discovery1 d = new Discovery1();
	Laptop_BT_Server1 serv = new Laptop_BT_Server1();


	
	public Vector NODE_scan() throws IOException, InterruptedException {
		System.out.println("Scanning for BT helpers...");
		Vector devices = new Vector();
		RemoteDeviceDiscovery.main(null);
		devices = rddis.devicesDiscovered;
		return devices;
	}
	
	public boolean NODE_discover(int index) throws IOException {
		boolean OPP;
		System.out.println("Scearching for OPP service...");

		OPP = d.discoverBT(index);
		return OPP;
	}
	
	public String NODE_listen(String filename) throws IOException{
		//SEED as a server
		String response;
		System.out.println("Listening...");

		response = serv.server_side(filename);
	    rem = serv.dev;
		return response;
	}
	
	public void NODE_receiveTask(String filename) throws IOException{
		//SEED as a server
		System.out.println("Waiting for tasks...");
		serv.server_side(filename);
		
	}
	public void NODE_sendTask(String filename, RemoteDevice rd) throws IOException{
		//SEED as a client
		System.out.println("Sending tasks...");


		clt.client_side(filename,"", rd);
		
	}
	public boolean NODE_evaluateAdmit(RemoteDevice CandidateNode) throws UnknownHostException, IOException{
     	boolean admitted;
		String st = "Admit\r\n";
		System.out.println("Sending evaluation for admission...");
		clt.client_side("",st, CandidateNode);
		admitted = true;
		return admitted;
	}
	
	public void NODE_reqHelp(RemoteDevice CandidateNode) throws UnknownHostException, IOException{
     	String st = "Invite\r\n";
		System.out.println("Requesting help..Sending invitation to join Oppnet...");

		clt.client_side("",st, CandidateNode);

	}
	public void NODE_report(String filename, RemoteDevice rd) throws IOException{
		//SEED as a client
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
	
	public void NODE_release(RemoteDevice JoinedNode) throws UnknownHostException, IOException{
     	String st = "Release\r\n";
		System.out.println("Releasing Oppnet helper...");
		clt.client_side("",st, JoinedNode);

	}
		
	

}
