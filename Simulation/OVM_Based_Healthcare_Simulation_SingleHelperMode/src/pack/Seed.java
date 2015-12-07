package pack;

import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import eduni.simjava.Sim_event;
import eduni.simjava.Sim_system;

public class Seed extends Node{

    public Parameters pr = new Parameters();
	
	public Seed(String name, Parameters p, double msgPayloadReadTime) {
		super(name, msgPayloadReadTime);
		pr = p;	
		this.msgPayloadReadtime = msgPayloadReadTime;
	}
	private ArrayList<Helper> CandidateHelpers = new ArrayList<Helper>();


	private ArrayList<Helper> AdmittedHelpers = new ArrayList<Helper>();
	public ArrayList<String> oppnetTasks = new ArrayList<String>();
	
		private ArrayList hlprIntegTime = new ArrayList();
		private double oppnetTimeToSucceedPerIter;
		 private int numOfRequestedHelpersPerNode = 0;
		    private int numOfJoindHelpersPerNode = 0;
		    private int numOfRefusedHelpersPerNode = 0;
		    private double task2Runtime;
		    private double task3Runtime;
		    public ArrayList<Double> tasksRunTimes = new ArrayList<Double>();
		    public double sumTasksRunTimes = 0;
			private double sumHelperItegTimePerInvNodePerIter;


	
	public void body() {
	
		double HlprIntegTime = 0;
        boolean canForward = false;
        boolean member = false;
		boolean Done = false;
		Helper Candidate_Helper = null;
		 int AH = 0;
		task2Runtime = pr.task2RuntimeSeedBT;
		task3Runtime = pr.task3RuntimeSeedBT;
		Sim_event ev = new Sim_event();
        
	//Step 1.1: seed initiates oppnet (Node_initiate)
	  Help helpObject = new Help();
	  sim_trace(1, "===========================================================");
      
      pr = this.NODE_initiate(this);
      sim_process(pr.task1Runtime);   
      this.tasksRunTimes.add(pr.task1Runtime);                

	  sim_trace(1, "Step 1.1 Done: "+ this.get_name()+" initiated oppnet");

   
      int admittedHelpersCount = 0;
	//Step 1.2: wristband scans for candidate helpers within range(Node_scan)
       
      CandidateHelpers  = NODE_scan(this, pr, 100);

          sim_process(this.msgPayloadReadtime);
          
          sim_trace(1, "Step 1.2 Done: "+ this.get_name()+" is done scanning for helpers in range and found the following:" );
  		  double startTime = Math.floor(Sim_system.sim_clock() * 100)/ 100;

          if(CandidateHelpers.size()==0)
              sim_trace(1, "None");
          else{
            for(int i = 0; i<CandidateHelpers.size(); i++)
              sim_trace(1, this.get_name() +", "+ this.get_id()+ ", found "+ CandidateHelpers.get(i).get_name()+ ", ID = "+ CandidateHelpers.get(i).get_id());
          }
       
          int i =0;
          while(i<CandidateHelpers.size()){
       	   //Step 1.3: seed discovers services in candidate helpers(Node_discover)

        	  
        	  canForward = this.NODE_discover(CandidateHelpers.get(i));
        	  
         
        	  if(canForward){
        		  Candidate_Helper = CandidateHelpers.get(i);

                  sim_trace(1, "Step 1.3 Done: "+ this.get_name()+", "+ this.get_id()+" discovered forwarding services in "+ Candidate_Helper.get_name()+", "+ Candidate_Helper.get_id());

               
                 //Step 1.4: seed checks if the candidate helper is already a member of Oppnet (Node_isMember)
                 
            	  member = this.NODE_isMember(pr.oppnet, Candidate_Helper);
                  
                   if(member){
                       sim_trace(1, "Step 1.4 Done:" + Candidate_Helper.get_name() +", " + Candidate_Helper.get_id()+ " is already a member of oppnet");
                   }
                   else{
                       sim_trace(1, "Step 1.4 Done:" + Candidate_Helper.get_name() + ", " + Candidate_Helper.get_id()+ " is not a member of oppnet");
                
                   
                      //Step 1.5: seed sends a request for help to candidate helper (Node_regHelp)
                       this.NODE_reqHelp(Candidate_Helper);
                       this.numOfRequestedHelpersPerNode ++;
                       sim_trace(1, "Step 1.5 Done: "+ this.get_name()+" sent a request for help to "+ Candidate_Helper.get_name()+", " + Candidate_Helper.get_id());
                       }
          }// end if(canForward)

	   
         
             //Step 1.6: seed listen to invitation acceptance from candidate helper (Node_listen)
            ev = new Sim_event();
                    
        	ev = this.NODE_listen();
        	if (ev.get_data()!= null){
              sim_trace(1, this.get_name()+" received a message from a node with id "+ ev.get_src());
               
           	 
        	  // Seed process the received message
        	  this.NODE_processMsg(msgPayloadReadtime);
              if(ev.get_data().equals("Done..ReqRelease")){
                  sim_trace(1, "Step 1.6 Done: "+ this.get_name()+","+ this.get_id()+ " evaluated the message and source and it is DONE notification from "+ Sim_system.get_entity(ev.get_src()).get_name() +", "+ Sim_system.get_entity(ev.get_src()).get_id());
                  Done = true;
                  sim_trace(1, "OPPNET SUCCEEDED");
				  this.oppnetTimeToSucceedPerIter= Math.floor(Sim_system.sim_clock() * 100)/ 100;

                            
                  break;
                  }
                       
 	           else if(ev.get_data().equals("NoGrandKids..ReqRelease")){
 	  	          sim_trace(1, "Step 1.7 Done: "+ this.get_name()+","+ this.get_id()+ " evaluated the message and source and it is NoGrandKids notification from "+ Sim_system.get_entity(ev.get_src()).get_name() +", "+ Sim_system.get_entity(ev.get_src()).get_id());
 	  	          AH++;
 	  	          }
               //Step 1.7a: seed evaluate the the node that accepted the invitation (Node_evalAdmit)
              boolean admit = false;
              admit = this.NODE_evalAdmit(ev, Candidate_Helper);
             
              if (admit){
            	  this.numOfJoindHelpersPerNode ++;
                  sim_trace(1, "Step 1.7b Done: "+ this.get_name()+" sent an admission notification to "+ Candidate_Helper.get_name()+ ", " + Candidate_Helper.get_id());

                  //Step 1.8: seed adds admitted helper to oppnet (Node_addNode)

                  pr.oppnet = this.NODE_addNode(pr.oppnet, Candidate_Helper);
                  sim_trace(1, "Step 1.8 Done: "+ this.get_name()+", "+ this.get_id()+" adds "+ Candidate_Helper.get_name() +", " + Candidate_Helper.get_id()+ " to oppnet");

                  AdmittedHelpers.add(Candidate_Helper);
                  double endTime = Math.floor(Sim_system.sim_clock() * 100)/ 100;
					
			      sim_trace(1, "Helper Integration Time From Seed= " +(endTime - startTime));
				  this.hlprIntegTime.add((endTime-startTime));
                  
				  //Step 1.9: seed sends help object to admitted helper (Node_report)

                   this.tasksRunTimes.add(this.task2Runtime);                
                   this.NODE_report(Candidate_Helper, pr.task2RuntimeSeedBT, 19, helpObject);      
                   sim_trace(1, "Step 1.9 Done: "+ this.get_name()+", "+ this.get_id()+" sent help object to "+ Candidate_Helper.get_name()+ ", "+ Candidate_Helper.get_id());
                         
                  //Step 1.10: seed sends oppnet tasks to admitted helper (Node_report)
                   this.NODE_sendData(Candidate_Helper, pr.task3RuntimeSeedBT, 110, oppnetTasks);      
                   this.tasksRunTimes.add(this.task3Runtime);                

                   sim_trace(1, "Step 1.10 Done: "+ this.get_name()+", "+ this.get_id()+" sent oppnet tasks to "+ Candidate_Helper.get_name() + ", "+ Candidate_Helper.get_id());
                       
                          break; //break once a single helper is integrated since it is a single helper mode
                         } // end if(ev.get_data().equals("Join") && Candidate_Helper.get_name().equals(Sim_system.get_entity(ev.get_src()).get_name()))
                   	   }// end if(ev.get_data() != null)
                        i++;
           }// end while(i<CandidateHelpers.size())
          
          
              //Step 1.10.a: listen to Done or not Done from helper
                   if(!Done)  { 
                       ev = new Sim_event();

                	  ev =  this.NODE_listen();
                      while ((ev.get_data()!= null)&&(AH<AdmittedHelpers.size())){  
        
                         if (ev.get_data()!= null){
    	                        sim_trace(1, "Step 1.10.a Done: "+ this.get_name()+" received a message from a node with id "+ ev.get_src());
		  	                    //Step 1.10b: processes the message
		  	                    sim_process(this.msgPayloadReadtime);
		  	                    
	                            if(ev.get_data().equals("Done..ReqRelease")){
	                               sim_trace(1, "Step 1.10.b Done: "+ this.get_name()+","+ this.get_id()+ " evaluated the message and source and it is DONE notification from "+ Sim_system.get_entity(ev.get_src()).get_name() +", "+ Sim_system.get_entity(ev.get_src()).get_id());
	                               Done = true;
	                               sim_trace(1, "OPPNET SUCCEEDED");
	           					  this.oppnetTimeToSucceedPerIter= Math.floor(Sim_system.sim_clock() * 100)/ 100;

	                               
	                               break;
	                            }
	                       
  	  	                       else
  	  	                            if(ev.get_data().equals("NoGrandKids..ReqRelease")){
  	  	  	                           sim_trace(1, "Step 1.11 Done: "+ this.get_name()+","+ this.get_id()+ " evaluated the message and source and it is NoGrandKids notification from "+ Sim_system.get_entity(ev.get_src()).get_name() +", "+ Sim_system.get_entity(ev.get_src()).get_id());
  	  	  	                           AH++;
  	 	  	                           System.out.println("Seed Evaluated the message and it is NOGrandKidsD notification from"+ Sim_system.get_entity(ev.get_src()).get_name() +", "+ Sim_system.get_entity(ev.get_src()).get_id());

  	  	  	                        }
                       		 }
  	                
                         ev = this.NODE_listen();
  	                      	
  	                         	   }//end while
                   }
                      	sim_trace(1, "AdmittedHelper size = "+ AdmittedHelpers.size());
                       	sim_trace(1, "AH = "+ AH);
               
                       	if (!Done) {
                      	 sim_trace(1, "OPPNET FAILED");
                       }                  
                       	 
                       //Step 1.12 release admitted helpers
                         int X = 0;
                         while(X< AdmittedHelpers.size()){
                        	 this.NODE_release(AdmittedHelpers.get(X), AdmittedHelpers.get(X).ctrlMsgDelTimeThroughLinkToParent);
                             sim_trace(1, "Step 1.12 Done: "+ this.get_name()+", "+ this.get_id()+" sent Released notification to "+ AdmittedHelpers.get(X).get_name()+ ", "+ AdmittedHelpers.get(X).get_id());

                         	 pr.oppnet = this.NODE_remNode(AdmittedHelpers.get(X), pr.oppnet);
                            sim_trace(1, "Step 1.13 Done: "+ this.get_name()+", "+ this.get_id()+" removed "+ AdmittedHelpers.get(X).get_name()+ ", "+ AdmittedHelpers.get(X).get_id() + " from oppnet");
                             X++;
                         }
                         
                         //Step 1.14: Terminate oppnet
                         this.NODE_terminate(pr.oppnet, this.get_id(), this.get_name());
                         
/////////////////////////////////////////////////////////////////////////////////////////
                         String filename;
                 		SimOutput so = new SimOutput();
                 	    this.sumHelperItegTimePerInvNodePerIter = so.calculate_Sum(this.hlprIntegTime);
                 	    
                 	    	filename = "HelperIntegTime.txt";
                 		   File oppnetFile = new File(filename);
                 	        PrintWriter oppnetFileWriter = null;
                             so.outputFile1(this.hlprIntegTime.size(), Done, filename, oppnetFileWriter, "Sum Helper Integ Time Per Node Per Iter", this.sumHelperItegTimePerInvNodePerIter, this.get_name(), this.get_id());
                 	    
//////////////////////////////////////////////////////////////////////////////////////////////////////////
                             
                             this.sumTasksRunTimes = so.calculate_Sum(this.tasksRunTimes);
                     	    
                 	    	filename = "TasksRuntimes.txt";
                 		   File file1 = new File(filename);
                 	         oppnetFileWriter = null;
                             so.outputFile1(this.tasksRunTimes.size(), Done, filename, oppnetFileWriter, "Sum Task Runtimes Per Node Per Iter", this.sumTasksRunTimes, this.get_name(), this.get_id());
/////////////////////////////////////////////////////////////////////////////////////////////////////////////	    
 //////////////////////////////////////////////////////////////////////////////////////////////////////////                 			  
                 			  filename = "OppnetSuccessTime.txt";
                 			  File file2= new File(filename);
                 		     oppnetFileWriter = null;

                 			if(Done){
                 		     // PrintWriter oppnetFileWriter2 = null;
                 			  so.outputFile(Done, filename, oppnetFileWriter, "Oppnet Time to Succeed Per Iter", this.oppnetTimeToSucceedPerIter, this.get_name(), this.get_id());

                 			  }
//////////////////////////////////////////////////////////////////////////////////////////////////////////
                 			
                 filename = "NumRequestedHelpers.txt";
                 File file3 = new File(filename);
                 oppnetFileWriter= null;
                 so.outputFile(Done, filename, oppnetFileWriter, "Number of Requested Helpers Per Node Per Iter", this.numOfRequestedHelpersPerNode, this.get_name(), this.get_id());
//////////////////////////////////////////////////////////////////////////////////////////////////////////
                 				
                 	filename = "NumJoinedHelpers.txt";
                 	File file4 = new File(filename);
                 	oppnetFileWriter = null;
                 	so.outputFile(Done, filename, oppnetFileWriter, "Number of Joined Helpers Per Node Per Iter", this.numOfJoindHelpersPerNode, this.get_name(), this.get_id());
///////////////////////////////////////////////////////////////////////////////////////////////////////////
                 	filename = "NumRefusedHelpers.txt";
                 	File file5 = new File(filename);
                 	oppnetFileWriter = null;
                 	so.outputFile(Done, filename, oppnetFileWriter, "Number of Refused Helpers Per Node Per Iter", (this.numOfRequestedHelpersPerNode - this.numOfJoindHelpersPerNode), this.get_name(), this.get_id());
///////////////////////////////////////////////////////////////////////////////////////////////////////////
                 	filename = "NumAdmittedHelpers.txt";
                 	File file6 = new File(filename);
                 	oppnetFileWriter = null;
                 	so.outputFile(Done, filename, oppnetFileWriter, "Number of Admitted Helpers Per Node Per Iter", (this.AdmittedHelpers.size()), this.get_name(), this.get_id());
                 	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
                 	filename = "HelperUnhurriedTask.txt";
                 	File file7 = new File(filename);
                 	oppnetFileWriter = null;
                 	so.outputFile(Done, filename, oppnetFileWriter, "Performed Unhurried Task", 0, this.get_name(), this.get_id());
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
                 	
                 	filename = "HelperUrgentTask.txt";
                 	File file8 = new File(filename);
                 	oppnetFileWriter = null;
                 	
                 	so.outputFile(Done, filename, oppnetFileWriter, "Performed Urgent Task", 1, this.get_name(), this.get_id());
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
                 			 		
       }
	
	
	
}
