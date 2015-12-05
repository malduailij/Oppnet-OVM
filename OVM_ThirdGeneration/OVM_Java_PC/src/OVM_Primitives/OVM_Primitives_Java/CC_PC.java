package OVM_Primitives.OVM_Primitives_Java;

import java.io.File;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.List;

public class CC_PC extends CC{
	

public List<String> NODE_addNode(File node){
	
    String path = "C:\\Users\\mai\\workspace\\OVM\\OppnetTree\\" ;
	if(node.renameTo(new File("C:\\Users\\mai\\workspace\\OVM\\OppnetTree\\" + node.getName()))){

	// if(file.renameTo(new File("C:\\Users\\mai\\workspace\\OVM\\OppnetTree\\" + file.getName()))){
 		System.out.println("Node is added successfully!");
 	   }else{
 		System.out.println("Failed to add the node!");}
 
 		 // list node names to be sent to Seed node
	     List<String> files = new ArrayList<String>();
 		  String file;
 		  File folder = new File(path);
 		  File[] listOfFiles = folder.listFiles(); 
 		 
 		  for (int i = 0; i < listOfFiles.length; i++) 
 		  {
 		 
 		   if (listOfFiles[i].isFile()) 
 		   {
 		   file = listOfFiles[i].getName();
 		   file = file.replace(".txt", "");
 		   files.add(file);
 		   }
 		  }
 		  return files;
 		  //after that send the listofNodeNames to SeedLaptop
}
	
public void NODE_removeNode(String NodeId){
	//String path = file.getAbsolutePath();
	//file.delete();
	boolean success = (new File
	         ("C:\\Users\\mai\\workspace\\OVM\\OppnetTree\\" + NodeId+".txt")).delete();
	         if (success) {
	            System.out.println("The node has been successfully removed"); 
	           
	         }
	         else{
		            System.out.println("Failed to remove the node"); 

	         }
}
}
