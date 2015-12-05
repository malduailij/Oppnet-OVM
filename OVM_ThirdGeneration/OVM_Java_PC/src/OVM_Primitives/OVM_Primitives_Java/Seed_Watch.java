package OVM_Primitives.OVM_Primitives_Java;

import java.io.*;
import java.net.*;
import java.util.Scanner;

public class Seed_Watch extends Seed {
	//public File[] ListofHelpers;
	/*
	public void SEED_release(String NodeId){
		//remove node from list of helpers and send a report to CC to remove it from tree
		 for (int i = 0; i < ListofHelpers_s.size(); i++) 
 		  {
 		   if (ListofHelpers_s.get(i).equals(NodeId)) {
 			   ListofHelpers_s.remove(i);
 			   System.out.println("Node is released _s!");

 			   break;
 		  }	
 		   
 		  }
		
		//then in main this method should be followed by Seed_sendTask (to send to the helper that it is released) then CTRL_removeNode	
		
	}*/
	public boolean NODE_is_member(String NodeId) throws FileNotFoundException{
		boolean ismember = false;
		/*
		
		  for (int i = 0; i < ListofHelpers_s.size(); i++) 
 		  {
 		   if (ListofHelpers_s.get(i).equals(NodeId)) {
 			   ismember = true;
 			   break;
 		  }		
 		  }*/
        File file = new File("Oppnet.txt");
	
		Scanner scanner = new Scanner(file);

		//now read the file line by line...
		int lineNum = 0;
		while (scanner.hasNextLine()) {
		    String line = scanner.nextLine();
		    lineNum++;
		    if(line.contains(NodeId)) { 
		       System.out.println("Member already exists!");
		       ismember = true;
		       break;
		        }
		    
		else{
			System.out.println("NodeID not found");
		       ismember = false;
		}
		} 
		return ismember;	
		
	}
	

}
