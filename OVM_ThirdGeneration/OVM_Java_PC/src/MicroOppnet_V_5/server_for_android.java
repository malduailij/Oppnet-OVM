package MicroOppnet_V_5;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;

import javax.bluetooth.*;
import javax.microedition.io.*;


public class server_for_android {
	/**
	* Class that implements an SPP Server which accepts single line of
	* message from an SPP client and sends a single line of response to the client.
	*/
	
	public static String response;

	//start server
	private void startServer() throws IOException, InterruptedException{

	//Create a UUID for SPP
		
	UUID uuid = new UUID("1101", true);
	//Create the service url
	String connectionString = "btspp://localhost:" + uuid.toString() +";name=Sample SPP Server";

	//open server url
	StreamConnectionNotifier streamConnNotifier = (StreamConnectionNotifier)Connector.open( connectionString );

	//Wait for client connection
	System.out.println("\nServer Started. Waiting for clients to connect�");
	StreamConnection connection=streamConnNotifier.acceptAndOpen();

	RemoteDevice dev = RemoteDevice.getRemoteDevice(connection);
	System.out.println("Remote device address: "+dev.getBluetoothAddress());
	System.out.println("Remote device name: "+dev.getFriendlyName(true));
	boolean x = true;
	//send response to spp client
		OutputStream outStream=connection.openOutputStream();
		PrintWriter pWriter=new PrintWriter(new OutputStreamWriter(outStream));
		pWriter.write("You Are Invited to join Oppnet\r\n");
		//System.out.println("entered");

		pWriter.flush();
	
	//read string from spp client
	InputStream inStream=connection.openInputStream();
	BufferedReader bReader=new BufferedReader(new InputStreamReader(inStream));
	String lineRead=bReader.readLine();
	System.out.println(lineRead);
	response = lineRead;

	//send response to spp client
	
	pWriter.write("You Are Admitted\r\n");
	System.out.println("entered");

	pWriter.flush();
	
//***************************************
	//read string from spp client
		lineRead=bReader.readLine();
		System.out.println(lineRead);
		response = lineRead;

		//send response to spp client
	
		pWriter.write("Released\r\n");

		pWriter.flush();


//***************************************
	pWriter.close();
	streamConnNotifier.close();

	}

	public static void main(String[] args) throws IOException, InterruptedException {

	//display local device address and name
	LocalDevice localDevice = LocalDevice.getLocalDevice();
	System.out.println("Address: "+localDevice.getBluetoothAddress());
	System.out.println("Name: "+localDevice.getFriendlyName());

	server_for_android server_for_android=new server_for_android();
	server_for_android.startServer();

	}
	}

