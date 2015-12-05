package OVM_Primitives.OVM_Primitives_Java;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.Vector;

import javax.bluetooth.BluetoothStateException;
import javax.bluetooth.DeviceClass;
import javax.bluetooth.DiscoveryAgent;
import javax.bluetooth.DiscoveryListener;
import javax.bluetooth.LocalDevice;
import javax.bluetooth.RemoteDevice;
import javax.bluetooth.ServiceRecord;
import javax.bluetooth.UUID;
import javax.microedition.io.Connector;
import javax.microedition.io.StreamConnection;

public class BT_Client implements DiscoveryListener{


	
	/**
	* A simple SPP client that connects with an SPP server
	*/

   // public static RemoteDevice remoteDevice;
	//object used for waiting
	private static Object lock=new Object();

	//vector containing the devices discovered
	private static Vector vecDevices=new Vector();

	private static String connectionURL=null;
	

		public void client_side(String filename, String st, RemoteDevice rd) throws IOException{
			BT_Client client=new BT_Client();

			LocalDevice localDevice = LocalDevice.getLocalDevice();

			DiscoveryAgent agent = localDevice.getDiscoveryAgent();
			UUID[] uuidSet = new UUID[1];
			uuidSet[0]=new UUID("1101",true);

			//System.out.println("\nSearching for service...");
			agent.searchServices(null,uuidSet,rd,client);

			try {
			synchronized(lock){
			lock.wait();
			}
			}
			catch (InterruptedException e) {
			e.printStackTrace();
			}

			if(connectionURL==null){
			System.out.println("Device does not support Simple SPP Service.");
			System.exit(0);
			}
			
            Discovery1 dis1 = new Discovery1();
            
			//connect to the server and send a line of text
			//StreamConnection streamConnection=(StreamConnection)Connector.open(connectionURL);

			StreamConnection streamConnection=(StreamConnection)Connector.open(connectionURL);
			//send a file
			if (filename!=""){
			 BufferedReader br = new BufferedReader(new FileReader(filename));
			  
			   String line = br.readLine();
			   String contents = "";
			   while (line != null) {
			            
			      contents = contents +line+" ";
			       line = br.readLine();
			        }

			        br.close();
			        st = contents +"\r\n";
			}
			//send string
			OutputStream outStream=streamConnection.openOutputStream();
			PrintWriter pWriter=new PrintWriter(new OutputStreamWriter(outStream));
			//pWriter.write("Test String from SPP Client\r\n");
			//pWriter.write(value);
			pWriter.write(st);

			pWriter.flush();

			//read response
			InputStream inStream=streamConnection.openInputStream();
			BufferedReader bReader2=new BufferedReader(new InputStreamReader(inStream));
			String lineRead=bReader2.readLine();
			//System.out.println(lineRead);

			
		}


	//methods of DiscoveryListener
	public void deviceDiscovered(RemoteDevice btDevice, DeviceClass cod) {
	//add the device to the vector
	if(!vecDevices.contains(btDevice)){
	vecDevices.addElement(btDevice);
	}
	}

	//implement this method since services are not being discovered
	public void servicesDiscovered(int transID, ServiceRecord[] servRecord) {
	if(servRecord!=null && servRecord.length>0){
	connectionURL=servRecord[0].getConnectionURL(0,false);
	}
	synchronized(lock){
	lock.notify();
	}
	}

	//implement this method since services are not being discovered
	public void serviceSearchCompleted(int transID, int respCode) {
	synchronized(lock){
	lock.notify();
	}
	}

	public void inquiryCompleted(int discType) {
	synchronized(lock){
	lock.notify();
	}

	}//end method

	}
