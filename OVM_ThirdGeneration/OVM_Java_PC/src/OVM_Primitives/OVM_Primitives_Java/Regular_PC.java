package OVM_Primitives.OVM_Primitives_Java;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class Regular_PC extends Regular{
	
	public void NODE_runApp(String App, String filename) throws IOException{
		switch (App){
			case "Display Msg":
				java.awt.Desktop.getDesktop().open(new File(filename));
				break;
			case "Upload file to ftp server":
				Regular_PC_WiFi hlIP = new Regular_PC_WiFi();
				hlIP.NODE_runApp_logReading(filename);
				break;
				
		}
	}
	
	public boolean NODE_is_member(String NodeId) throws FileNotFoundException{
		boolean ismember = false;
	
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
			//System.out.println("NodeID not found");
		       ismember = false;
		}
		} 
	    if (!ismember)System.out.println("NodeID not found");

		
		return ismember;	
		
	}
	
public boolean NODE_processMSG(String pathname, String s) throws IOException{
		String st = null;
		String line;
		boolean b;
		
		BufferedReader reader = new BufferedReader(new FileReader(pathname));
		while((line = reader.readLine()) != null){
			st = st+line;
			}
		if (st.contains(s))
			b = true;
		else
			b = false;
		
		return b;
	}	
	


}
