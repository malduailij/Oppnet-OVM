package OVM_Primitives.OVM_Primitives_Java;
import java.net.*;
import java.io.*;
public class CC_PC_UART extends Regular_PC {
	public static final String reqHelp = "111";
	public static final String Join = "222";
	public static final String Admit = "333";
	public static final String reqRelease = "444";
	public static final String Release = "555";
	public static final String Task = "911";

	public Process NODE_listen2(Process p) throws InterruptedException, IOException{
		String myScript = "java -cp /opt/tinyos-2.x/apps/tests/Oppnet2 Listen_2 -comm network@localhost:60002";

       	 String[] cmdArray = {"xterm", "-e", myScript+ " ; sleep 5"};
       	 p = Runtime.getRuntime().exec(cmdArray);
       	
       	 return p;
		}
	///////////////////////////////////////////////////////////////////////////////////////
	public Process NODE_join(Process p) throws InterruptedException, IOException{
		
        
   	 String myScript = "java -cp /opt/tinyos-2.x/apps/tests/Oppnet2 Join -comm network@localhost:60002";

   	 String[] cmdArray = {"xterm", "-e", myScript+ " ; sleep 5"};
   	 p = Runtime.getRuntime().exec(cmdArray);
   	
   	 return p;
	}
	////////////////////////////////////////////////////////////////////////////////////////////
	public Process NODE_reqRelease(Process p) throws InterruptedException, IOException{
		
        
	   	 String myScript = "java -cp /opt/tinyos-2.x/apps/tests/Oppnet2 Req_Release -comm network@localhost:60002";

	   	 String[] cmdArray = {"xterm", "-e", myScript+ " ; sleep 5"};
	   	 p = Runtime.getRuntime().exec(cmdArray);
	   	
	   	 return p;
		}
	/////////////////////////////////////////////////////////////////////////////////////////
		public Process NODE_reqHelp(Process p) throws InterruptedException, IOException{
			
        
        	 String myScript = "java -cp /opt/tinyos-2.x/apps/tests/Oppnet2 Req_Help -comm network@localhost:60001";

        	 String[] cmdArray = {"xterm", "-e", myScript+ " ; sleep 5"};
        	 p = Runtime.getRuntime().exec(cmdArray);
        	
        	 return p;
		}
	//////////////////////////////////////////////////////////////////////////////////	
		public Process NODE_sendTask(Process p) throws InterruptedException, IOException{
			String myScript = "java -cp /opt/tinyos-2.x/apps/tests/Oppnet2 Send_Task -comm network@localhost:60001";

       	 String[] cmdArray = {"xterm", "-e", myScript+ " ; sleep 5"};
       	 p = Runtime.getRuntime().exec(cmdArray);
       
  		  return p;
		}

/////////////////////////////////////////////////////////////////////////////////	

		public Process NODE_evaluateAdmit(Process p) throws InterruptedException, IOException{
			
			String myScript = "java -cp /opt/tinyos-2.x/apps/tests/Oppnet2 Evaluate_Admit -comm network@localhost:60001";

       	 String[] cmdArray = {"xterm", "-e", myScript+ " ; sleep 5"};
       	 p = Runtime.getRuntime().exec(cmdArray);
	
 		  return p;
		}

		////////////////////////////////////////////////////////////////////////////////
		public Process NODE_listen1(Process p) throws InterruptedException, IOException{
			String myScript = "java -cp /opt/tinyos-2.x/apps/tests/Oppnet2 Listen_1 -comm network@localhost:60001";

	       	 String[] cmdArray = {"xterm", "-e", myScript+ " ; sleep 5"};
	       	 p = Runtime.getRuntime().exec(cmdArray);
	       	
	       	 return p;
			}
		////////////////////////////////////////////////////////////////////////////////
		public Process NODE_release(Process p) throws InterruptedException, IOException{
			
	        
       	 String myScript = "java -cp /opt/tinyos-2.x/apps/tests/Oppnet2 Release -comm network@localhost:60001";

       	 String[] cmdArray = {"xterm", "-e", myScript+ " ; sleep 5"};
       	 p = Runtime.getRuntime().exec(cmdArray);
       	
       	 return p;
		}
}