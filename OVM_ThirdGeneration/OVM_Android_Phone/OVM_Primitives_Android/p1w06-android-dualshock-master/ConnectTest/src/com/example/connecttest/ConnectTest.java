package com.example.connecttest;
 
import java.io.*;
import java.util.UUID;
 
import com.example.bttest.R;
 
import android.app.Activity;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothSocket;
import android.content.Intent;
import android.os.Bundle;
import android.telephony.SmsManager;
import android.widget.TextView;
import android.widget.Toast;
import android.net.*;
 
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.DialogInterface.OnClickListener;

import OVM_Primitives_Android.Regular;
import OVM_Primitives_Android.Regular_Phone;
import OVM_Primitives_Android.Regular_Phone_BT;
import OVM_Primitives_Android.Regular_Phone_Cell;

public class ConnectTest extends Activity {
  TextView out;
  private static final int REQUEST_ENABLE_BT = 1;
  private BluetoothAdapter btAdapter = null;
  private BluetoothSocket btSocket = null;
  private OutputStream outStream = null;
   
  // Well known SPP UUID
  private static final UUID MY_UUID =
      UUID.fromString("00001101-0000-1000-8000-00805F9B34FB");
 
  // Insert your server's MAC address
  private static String address = "00:15:83:0C:BF:EB";
 
  /** Called when the activity is first created. */
  @Override
  public void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.main);
 
    out = (TextView) findViewById(R.id.out);
     
    out.append("\n...In onCreate()...");
 
    btAdapter = BluetoothAdapter.getDefaultAdapter();
    CheckBTState();
  }
 
  @Override
  public void onStart() {
    super.onStart();
    out.append("\n...In onStart()...");
  }
 
  @Override
  public void onResume() {
    super.onResume();
 
    out.append("\n...In onResume...\n...Attempting client connect...");
 
    // Set up a pointer to the remote node using it's address.
    BluetoothDevice device = btAdapter.getRemoteDevice(address);
 
    // Two things are needed to make a connection:
    //   A MAC address, which we got above.
    //   A Service ID or UUID.  In this case we are using the
    //     UUID for SPP.
    try {
      btSocket = device.createRfcommSocketToServiceRecord(MY_UUID);
    } catch (IOException e) {
      AlertBox("Fatal Error", "In onResume() and socket create failed: " + e.getMessage() + ".");
    }
 
    // Discovery is resource intensive.  Make sure it isn't going on
    // when you attempt to connect and pass your message.
    btAdapter.cancelDiscovery();
 
    // Establish the connection.  This will block until it connects.
    try {
      btSocket.connect();
      out.append("\n...Connection established and data link opened...");
    } catch (IOException e) {
      try {
        btSocket.close();
      } catch (IOException e2) {
        AlertBox("Fatal Error", "In onResume() and unable to close socket during connection failure" + e2.getMessage() + ".");
      }
    }
      InputStream inStream;

      try {
          inStream = btSocket.getInputStream();
          BufferedReader bReader=new BufferedReader(new InputStreamReader(inStream));
          String lineRead=bReader.readLine();
          out.append("\n..."+lineRead+"\n");

      } catch (IOException e) {
          // TODO Auto-generated catch block
          e.printStackTrace();
      }
    // Create a data stream so we can talk to server.
    out.append("\n...Sending message to server...");
 
    try {
      outStream = btSocket.getOutputStream();
    } catch (IOException e) {
      AlertBox("Fatal Error", "In onResume() and output stream creation failed:" + e.getMessage() + ".");
    }
 
    //String message = "Join.\n";
      Regular_Phone_BT rbt = new Regular_Phone_BT();
      String message = rbt.NODE_join();

      byte[] msgBuffer = message.getBytes();
    try {
      outStream.write(msgBuffer);
    } catch (IOException e) {
      String msg = "In onResume() and an exception occurred during write: " + e.getMessage();
      if (address.equals("00:00:00:00:00:00")) 
        msg = msg + ".\n\nUpdate your server address from 00:00:00:00:00:00 to the correct address on line 37 in the java code";
      msg = msg +  ".\n\nCheck that the SPP UUID: " + MY_UUID.toString() + " exists on server.\n\n";
       
      AlertBox("Fatal Error", msg);       
    }
      try {
          inStream = btSocket.getInputStream();
          BufferedReader bReader=new BufferedReader(new InputStreamReader(inStream));
          String lineRead=bReader.readLine();
          out.append("\n..."+lineRead+"\n");

      } catch (IOException e) {
          // TODO Auto-generated catch block
          e.printStackTrace();
      }
      /*
      Intent smsSIntent = new Intent(Intent.ACTION_SENDTO, Uri.parse("smsto:2697798368"));
      smsSIntent.putExtra("sms_body", "Help me 911");
      startActivity(smsSIntent);
*/
      Regular_Phone_Cell rc = new Regular_Phone_Cell();
      String theCellNum = rc.NODE_runApp();
     SmsManager sms = SmsManager.getDefault();
     sms.sendTextMessage(theCellNum, null, "Help 911", null, null);
      /*
      Intent smsVIntent = new Intent(Intent.ACTION_VIEW);
      smsVIntent.setType("vnd.android-dir/mms-sms");
      // extra fields for number and message respectively
      smsVIntent.putExtra("address", "2697798368");
      smsVIntent.putExtra("sms_body", "Help me please 911");
      startActivity(smsVIntent);
*/
      //********************************************************
      //calling phone
     // Intent intent = new Intent(Intent.ACTION_CALL);
     // intent.setData(Uri.parse("tel:2697798368"));
     // startActivity(intent);
      //***************************************************************

      try {
          Thread.sleep(3000);
      } catch (InterruptedException e) {
          e.printStackTrace();
      }
      try {
          outStream = btSocket.getOutputStream();
      } catch (IOException e) {
          AlertBox("Fatal Error", "In onResume() and output stream creation failed:" + e.getMessage() + ".");
      }
      String message2 = "Request Release.\n";
      byte[] msgBuffer2 = message2.getBytes();
      try {
          outStream.write(msgBuffer2);
      } catch (IOException e) {
          String msg = "In onResume() and an exception occurred during write: " + e.getMessage();
          if (address.equals("00:00:00:00:00:00"))
              msg = msg + ".\n\nUpdate your server address from 00:00:00:00:00:00 to the correct address on line 37 in the java code";
          msg = msg +  ".\n\nCheck that the SPP UUID: " + MY_UUID.toString() + " exists on server.\n\n";

          AlertBox("Fatal Error", msg);
      }
      //InputStream inStream;
      try {
          inStream = btSocket.getInputStream();
          BufferedReader bReader=new BufferedReader(new InputStreamReader(inStream));
          String lineRead=bReader.readLine();
          out.append("\n..."+lineRead+"\n");

      } catch (IOException e) {
          // TODO Auto-generated catch block
          e.printStackTrace();
      }
      //************************************************************************8
  }
 
  @Override
  public void onPause() {
    super.onPause();
      /*
      InputStream inStream;
      try {
          inStream = btSocket.getInputStream();
          BufferedReader bReader=new BufferedReader(new InputStreamReader(inStream));
          String lineRead=bReader.readLine();
          out.append("\n..."+lineRead+"\n");

      } catch (IOException e) {
          // TODO Auto-generated catch block
          e.printStackTrace();
      }*/
    out.append("\n...In onPause()...");
 
    if (outStream != null) {
      try {
        outStream.flush();
      } catch (IOException e) {
        AlertBox("Fatal Error", "In onPause() and failed to flush output stream: " + e.getMessage() + ".");
      }
    }
 
    try     {
      btSocket.close();
    } catch (IOException e2) {
      AlertBox("Fatal Error", "In onPause() and failed to close socket." + e2.getMessage() + ".");
    }
  }
 
  @Override
  public void onStop() {
    super.onStop();
    out.append("\n...In onStop()...");
  }
 
  @Override
  public void onDestroy() {
    super.onDestroy();
    out.append("\n...In onDestroy()...");
  }
   
  private void CheckBTState() {
    // Check for Bluetooth support and then check to make sure it is turned on
 
    // Emulator doesn't support Bluetooth and will return null
    if(btAdapter==null) { 
      AlertBox("Fatal Error", "Bluetooth Not supported. Aborting.");
    } else {
      if (btAdapter.isEnabled()) {
        out.append("\n...Bluetooth is enabled...");
      } else {
        //Prompt user to turn on Bluetooth
        Intent enableBtIntent = new Intent(btAdapter.ACTION_REQUEST_ENABLE);
        startActivityForResult(enableBtIntent, REQUEST_ENABLE_BT);
      }
    }
  }
   
  public void AlertBox( String title, String message ){
    new AlertDialog.Builder(this)
    .setTitle( title )
    .setMessage( message + " Press OK to exit." )
    .setPositiveButton("OK", new OnClickListener() {
        public void onClick(DialogInterface arg0, int arg1) {
          finish();
        }
    }).show();
  }
}