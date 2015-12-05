
package OVM_Primitives.OVM_Primitives_Java;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.Writer;
import java.util.Vector;

import javax.bluetooth.DeviceClass;
import javax.bluetooth.DiscoveryAgent;
import javax.bluetooth.DiscoveryListener;
import javax.bluetooth.LocalDevice;
import javax.bluetooth.RemoteDevice;
import javax.bluetooth.ServiceRecord;
import javax.bluetooth.UUID;

/**
*
* Class that discovers all bluetooth devices in the neighbourhood,
*
* Connects to the chosen device and checks for the presence of OBEX push service in it.
* and displays their name and bluetooth address.
*
*
*/

public class Discovery1 implements DiscoveryListener{
	

//object used for waiting
private static Object lock=new Object();

//vector containing the devices discovered
public static Vector vecDevices=new Vector();

private static String connectionURL=null;
public String con;

/**
* Entry point.
*/
public boolean discoverBT(int index) throws IOException {
boolean OPP;

Discovery1 bluetoothServiceDiscovery=new Discovery1();
LocalDevice localDevice = LocalDevice.getLocalDevice();

DiscoveryAgent agent = localDevice.getDiscoveryAgent();

RemoteDevice remoteDevice=(RemoteDevice)vecDevices.elementAt(index);


UUID[] uuidSet = new UUID[1];
uuidSet[0]=new UUID("1105",true);

//System.out.println("\nSearching for service...");
agent.searchServices(null,uuidSet,remoteDevice,bluetoothServiceDiscovery);

try {
synchronized(lock){
lock.wait();
}
}
catch (InterruptedException e) {
e.printStackTrace();
}

if(connectionURL==null){
	System.out.print(remoteDevice.getFriendlyName(true));
    System.out.print(remoteDevice.getBluetoothAddress());

   // System.out.println("Device does not support Object Push.");
    OPP = false;

}
else{
    OPP = true;
    System.out.print(remoteDevice.getFriendlyName(true));
    System.out.print(remoteDevice.getBluetoothAddress());


   // System.out.println(" Device supports Object Push.");

}

return OPP;
}

/**
* Called when a bluetooth device is discovered.
* Used for device search.
*/
public void deviceDiscovered(RemoteDevice btDevice, DeviceClass cod) {
//add the device to the vector
if(!vecDevices.contains(btDevice)){
vecDevices.addElement(btDevice);
}
}

/**
* Called when a bluetooth service is discovered.
* Used for service search.
*/
public void servicesDiscovered(int transID, ServiceRecord[] servRecord) {
if(servRecord!=null && servRecord.length>0){
connectionURL=servRecord[0].getConnectionURL(0,false);
con = connectionURL;
}
synchronized(lock){
lock.notify();
}
}

/**
* Called when the service search is over.
*/
public void serviceSearchCompleted(int transID, int respCode) {
synchronized(lock){
lock.notify();
}
}

/**
* Called when the device search is over.
*/
public void inquiryCompleted(int discType) {
synchronized(lock){
lock.notify();
}

}//end method

}//end class