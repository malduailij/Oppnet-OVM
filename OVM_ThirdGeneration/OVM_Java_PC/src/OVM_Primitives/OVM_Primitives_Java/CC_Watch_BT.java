package OVM_Primitives.OVM_Primitives_Java;

import java.io.*;

import javax.bluetooth.RemoteDevice;

public class CC_Watch_BT extends CC_Watch {
	public void NODE_initiate(String NodeID, String Tasks) throws IOException{
		//add CC node to Oppnet
		PrintWriter writer = new PrintWriter("Oppnet.txt", "UTF-8");
		writer.println(Tasks);
		writer.println(NodeID);
		writer.close();
		
	}
	public void NODE_command(String command, RemoteDevice rd) throws IOException{
		//CC as a client
		BT_Client lbtc = new BT_Client();
		lbtc.client_side("", command, rd);
	}
	public void NODE_terminate() throws IOException{

		PrintWriter writer = new PrintWriter("Oppnet.txt");
		writer.print("");
		writer.close();
	}
}
