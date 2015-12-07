package pack;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

import eduni.simjava.Sim_event;
import eduni.simjava.Sim_system;

public class Helper extends Node implements Comparable <Helper>{

public String category;
public int sortingOrder;
public Parameters pr = new Parameters();
public double helperWorkloadRatio;
public String linkWithParent;
public double ctrlMsgDelTimeThroughLinkToParent;

private ArrayList<Double> hlprIntegTime = new ArrayList<Double>();
private double avgHelperItegTimePerInvNodePerIter;

private int numOfRequestedHelpersPerNode = 0;
private int numOfJoindHelpersPerNode = 0;


public boolean performedUrgent = false;
public boolean performedUnhurried = false;
public ArrayList<Double> tasksRunTimes = new ArrayList<Double>();



	public Helper(String name, Parameters p, double msgPayloadReadTime) {
		
		super(name, msgPayloadReadTime);
		pr = p;
		this.msgPayloadReadtime = msgPayloadReadTime;
	}
	private ArrayList<Helper> CandidateHelpers = new ArrayList<Helper>();
	private ArrayList<Helper> AdmittedHelpers = new ArrayList<Helper>();
 	Scanner scanner = null;
 	public double sumHelperItegTimePerInvNodePerIter = 0;
 	public double sumTasksRunTimes = 0;
	
	public void body() {
    	ArrayList<String> oppnetTasks = null;
		Help helpObject = null;
		
		boolean admitted = false;
		boolean Done = false;
		boolean Released = false;
		boolean sent = false;
		Node Inviting_Node = null;
		boolean validated = false;
		boolean joined = false;
        boolean canForward = false;
        boolean member = false;
        boolean admit = false;
	
		Helper Candidate_Helper = null;

      
		//Step 2.1: Node listens to incoming messages
		Sim_event ev = new Sim_event();
    	ev = this.NODE_listen();
        if (ev.get_data()!= null){
         sim_trace(1, "Step 2.1 Done: "+ this.get_name()+", " + this.get_id()+" received a message from a node with id "+ ev.get_src());
        
        //Step 2.2: Node processes the message (Node_processMsg)
         this.NODE_processMsg(this.msgPayloadReadtime);
 	     sim_trace(1, "msgpayloadReadtime from helper "+ this.msgPayloadReadtime);
 	     validated = this.NODE_validate(ev);
 	     if(validated){
 	     
             sim_trace(1, "Step 2.2 Done: "+ this.get_name()+", " + this.get_id()+" processes the message and it is a help request from "+ Sim_system.get_entity(ev.get_src()).get_name() +", "+ Sim_system.get_entity(ev.get_src()).get_id());
             Inviting_Node = (Node) Sim_system.get_entity(ev.get_src());
         
             //Step 2.3: Node accepts invitation if it can join oppnet or is willing to join oppnet
             joined = this.NODE_joinOppnet(this.category, this.helperWorkloadRatio, Inviting_Node, this.ctrlMsgDelTimeThroughLinkToParent);
      
              if (joined){
            	 sim_trace(1, "Step 2.3 Done: "+ this.get_name()+", " + this.get_id()+" accepted invitation of "+ Inviting_Node.get_name() +", "+ Inviting_Node.get_id());
         
           
            //Step 2.4: Node listens to admission notification
     		 ev = new Sim_event();
     		 ev = this.NODE_listen();
         	if (ev.get_data()!= null){
             sim_trace(1, "Step 2.4 Done: "+ this.get_name()+", " + this.get_id()+" received a message from a node with id "+ ev.get_src());
         
             //Step 2.5: Node process the message (Node_processMsg)
             this.NODE_processMsg(this.msgPayloadReadtime);
             sim_process(this.msgPayloadReadtime);
             //Step 2.5a: Node_validate
               if(ev.get_data().equals("Admitted")){
                 sim_trace(1, "Step 2.5a Done: "+ this.get_name()+", " + this.get_id()+" processes the message and it is admission notification from  "+ Sim_system.get_entity(ev.get_src()).get_name()+  ", " +Sim_system.get_entity(ev.get_src()).get_id());
                 admitted = true;
                 Inviting_Node = (Node) Sim_system.get_entity(ev.get_src());

             }
             }
             }//if(joined)
         } //end if(validated)
    }//end if(ev.get_data()!=null))
        boolean received_helpObject = false;
        boolean received_oppnetTasks = false;
      
		 if(admitted){			 
			 		 
			  //Step 2.6: Node listen to help object and oppnet tasks from inviting node (Node_listen)
	          while((!received_helpObject)||(!received_oppnetTasks)){     
	             ev = new Sim_event();
	             ev = this.NODE_listen();
	         	 if (ev.get_data() != null){
	             sim_trace(1, "Step 2.6: "+ this.get_name()+", " + this.get_id()+" received a message from a node with id "+ ev.get_src() );
	           //Step 2.7: Node processes the message (Node_processMsg)
	             this.NODE_processMsg(this.msgPayloadReadtime);
	             
	             if(!received_helpObject &&((ev.get_tag() == 19) || (ev.get_tag() == 220))){
	                 sim_trace(1, "Step 2.7: "+ this.get_name()+", " + this.get_id()+" processes the message and it is the help object from "+ Sim_system.get_entity(ev.get_src()).get_name() + "," + ev.get_src());
	                 helpObject = (Help) ev.get_data();
	                 received_helpObject = true;
	             }
	             if(!received_oppnetTasks &&((ev.get_tag() == 110) || (ev.get_tag() == 221))){
	                 sim_trace(1, "Step 2.8: "+ this.get_name()+", " + this.get_id()+" processes the message and it is the oppnet tasks from "+ Sim_system.get_entity(ev.get_src()).get_name() + "," + ev.get_src());
	                 oppnetTasks = (ArrayList) ev.get_data();
	                 received_oppnetTasks = true;
	            } 
	             
	             
	         	 }
	          }
            
	    	   //Step 2.9: Node checks which of the oppnet tasks it can perform (Node_selectTask) and (Node_runApp)
	       ArrayList <String> DeviceTasks = new ArrayList<String>();

	       Done = this.NODE_selectTask(this, this.DeviceApps, oppnetTasks, helpObject, pr);
		  // Done =  this.NODE_runApp(this.get_id(), this.get_name(), DeviceTasks, this.pr, helpObject);
		 //  Done =  this.NODE_runApp(this, this.get_id(), this.get_name(), DeviceTasks, this.pr, helpObject);

	  		 //Step 2.10: Node check if the task done is the goal
		   if(Done){
	 		 sim_trace(1, "Step 2.10: "+ this.get_name()+", " + this.get_id()+" is done with the goal");
	 		 Released = this.NODE_reqRelease(this.get_id(), this.get_name(), Inviting_Node,this.ctrlMsgDelTimeThroughLinkToParent, "Done..ReqRelease");
	          }
		  
			if (!Done) {
				// Step 2.11: Helper did not do the goal.. so It scans for
				sim_trace(1,
						"Step 2.11: " + this.get_name() + ", " + this.get_id()
								+ " I could not do the goal,, I will forward");
			    CandidateHelpers = this.NODE_scan(this, pr, 100);

			         sim_trace(1, "Step 2.12 Done: "+ this.get_name()+", "+ this.get_id()+" is done scanning for helpers in range and found the following:" );
					double startTime = Math.floor(Sim_system.sim_clock() * 100)/ 100;

			          if(CandidateHelpers.size()==0){
			              sim_trace(1, "None");
			              sim_trace(1, "Step 2.13: "+ this.get_name()+", " + this.get_id()+" Could not find grand kids");
	                      Released = this.NODE_reqRelease(this.get_id(), this.get_name(), Inviting_Node, this.ctrlMsgDelTimeThroughLinkToParent, "NoGrandKids..ReqRelease");
	                	  sent = true;
			          }
			          
			          else{
			            for(int z = 0; z<CandidateHelpers.size(); z++)
			              sim_trace(1, this.get_name() +", "+ this.get_id()+ ", found "+ CandidateHelpers.get(z).get_name()+ ", ID = "+ CandidateHelpers.get(z).get_id());
			          }// end else 
			          
			          int i =0;
			          while(i<CandidateHelpers.size()){
			          //Step 2.14: Node discovers services in candidate helpers(Node_discover)
			        	canForward = this.NODE_discover(CandidateHelpers.get(i));
			        	        
			        	if(canForward){
			        		Candidate_Helper = CandidateHelpers.get(i);
			                 sim_trace(1, "Step 2.14 Done: "+ this.get_name()+" ,"+ this.get_id() +" discovered forwarding services in "+ Candidate_Helper.get_name()+", "+ Candidate_Helper.get_id());
			                
			        	
			        	 //Step 2.15: Node checks if the candidate helper is already a member of Oppnet (Node_isMember)
		         
		                  member = this.NODE_isMember(pr.oppnet, Candidate_Helper);
		                  if(member){
		                       sim_trace(1, "Step 2.15 Done:" +Candidate_Helper.get_name() + ", " + Candidate_Helper.get_id() + " is already a member of oppnet");
		                   }
		                   else{
		                       sim_trace(1, "Step 2.15 Done:" + Candidate_Helper.get_name() + ", " + Candidate_Helper.get_id() + " is not a member of oppnet");
		                   
			        
		 	        	  
		 	        	//Step 2.16: Node sends a request for help to candidate helper (Node_regHelp)
	   	                   this.NODE_reqHelp(Candidate_Helper);
	   	                   this.numOfRequestedHelpersPerNode ++;
	   	                   sim_trace(1, "Step 2.16 Done: "+ this.get_name()+", " + this.get_id()+" sent a request for help to "+ Candidate_Helper.get_name()+ ", "+ Candidate_Helper.get_id());
		                   }// end else
			        	} // end if(canForward)
			        	
	   	                   //Step 2.17: Node listens to invitation acceptance from candidate helper (Node_listen)
	   	                   ev = new Sim_event();
	   	                   ev = this.NODE_listen();
	                   	   if (ev.get_data()!= null){

	                          sim_trace(1, "Step 2.17 Done: "+ this.get_name()+", "+ this.get_id()+" received a message from a node with id "+ ev.get_src());
	                       
	                       //Step 2.18a: Node evaluate the the node that accepted the invitation (Node_evalAdmit)
	                          this.NODE_processMsg(this.msgPayloadReadtime);
		                      admit = this.NODE_evalAdmit(ev, Candidate_Helper);

	                        
	                        if(ev.get_data().equals("Released") ){
	                            sim_trace(1, "Step 2.18a Done: "+ this.get_name()+", "+ this.get_id()+" evaluated the message and source and it is released notification from "+ Inviting_Node.get_name() +", " + Inviting_Node.get_id());
	                            Released = true;
	                            break;
	                        }
	                        if(ev.get_data().equals("Done..ReqRelease") ){
	                            sim_trace(1, "Step 2.18a Done: "+ this.get_name()+", "+ this.get_id()+" evaluated the message and source and it is Done notification from "+ Sim_system.get_entity(ev.get_src()).get_name() +", " + Sim_system.get_entity(ev.get_src()).get_id());
	                            Done = true;
	                            Released = this.NODE_reqRelease(this.get_id(), this.get_name(), Inviting_Node, this.ctrlMsgDelTimeThroughLinkToParent, "Done..ReqRelease");
	                   		    if (Released) break;
	                        }
	                         if(admit){
	                           this.numOfJoindHelpersPerNode ++;
	                           this.AdmittedHelpers.add(Candidate_Helper);
	                            pr.oppnet = this.NODE_addNode(pr.oppnet, Candidate_Helper);
		                       sim_trace(1, "Step 2.19a Done: "+ this.get_name()+ ", "+ this.get_id()+" added "+ Candidate_Helper.get_name() +", " + Candidate_Helper.get_id()+ " to oppnet");
		                     //  sim_trace(1, "Helper Integration Time = "+ Math.floor(Sim_system.sim_clock()*100)/100);
		                       double endTime = Math.floor(Sim_system.sim_clock() * 100)/ 100;

								this.hlprIntegTime.add((endTime-startTime));
								 
		                       //Step 2.20: Node sends help object to admitted helper (Node_report)
		                    	 this.NODE_report(Candidate_Helper, this.task2Runtime, 220, helpObject);
	                              sim_trace(1, "Step 2.20 Done: "+ this.get_name()+", " + this.get_id()+" sent help object to "+ Candidate_Helper.get_name()+ ", "+ Candidate_Helper.get_id());
	                              this.performedUrgent = true;
	                              this.tasksRunTimes.add(this.task2Runtime);
	                              
	                             //Step 2.21: Node sends oppnet tasks to admitted helper (Node_report)
	                              this.NODE_sendData(Candidate_Helper, this.task3Runtime, 221, oppnetTasks);
	                             sim_trace(1, "Step 2.21 Done: "+ this.get_name()+", " + this.get_id()+" sent oppnet tasks to "+ Candidate_Helper.get_name() + ", "+ Candidate_Helper.get_id());
	                              this.tasksRunTimes.add(this.task3Runtime);

		                     
	                        } // end if(admit)
	                    	  
                    	   }// end if(ev.get_data() != null)

       		     i++;    
       		    }  //end while(i<CandidateHelpers.size())
			         
			 if(!Released && !Done)  {      
  
	                           //Step 2.22a helper listens to Done or not Done from admitted helper or release from inviting node
	                            int AH = 0; 
	                             ev = new Sim_event();
	                             ev = this.NODE_listen();
	  	                     while (ev.get_data()!= null){
	                               sim_trace(1, "Step 2.22a Done: "+ this.get_name()+" received a message from a node with id "+ ev.get_src());
	                             
	  	                           //Step 2.22b node process the message
	  	                          
	                              this.NODE_processMsg(this.msgPayloadReadtime);
	  	                          if(ev.get_data().equals("Done..ReqRelease")){
	  	                               sim_trace(1, "Step 2.22b Done: "+ this.get_name()+","+ this.get_id()+ " evaluated the message and source and it is DONE notification from "+ Sim_system.get_entity(ev.get_src()).get_name() +", "+Sim_system.get_entity(ev.get_src()).get_id());
	  	                               Done = true;
	  	                               
	  	                             //Step 2.23:Helper sends to inviting node that its admitted helpers done the job
	  	                               Released = this.NODE_reqRelease(this.get_id(), this.get_name(), Inviting_Node, this.ctrlMsgDelTimeThroughLinkToParent, "Done..ReqRelease");
		  	                          if (Released) break;
	  	                            }
	  	                           
	  	                          else	 if(ev.get_data().equals("NoGrandKids..ReqRelease")){
	  	  	                               sim_trace(1, "Step 2.23 Done: "+ this.get_name()+","+ this.get_id()+ " evaluated the message and source and it is NoGrandKids notification from "+ Sim_system.get_entity(ev.get_src()).get_name() +", "+ Sim_system.get_entity(ev.get_src()).get_id());
	  	  	                               AH++;
	  	  	                               
	  	  	                               if (AH>= AdmittedHelpers.size()&& (!Done) && (!Released) &&(!sent)){
	  	  	                            	   System.out.println(this.get_name()+","+ this.get_id() +" AH = "+ AH + " admittedHelpers= "+ AdmittedHelpers.size());
			                         		   Released = this.NODE_reqRelease(this.get_id(), this.get_name(), Inviting_Node, this.ctrlMsgDelTimeThroughLinkToParent, "NoGrandKids..ReqRelease");

			  	                   		       if (Released) break;
			                         	   }
	  	  	                            }
	  	                          else if(ev.get_data().equals("Released")){
	  	                               sim_trace(1, "Step 2.24 Done: "+ this.get_name()+","+ this.get_id()+ " evaluated the message and source and it is Released notification from "+ Sim_system.get_entity(ev.get_src()).get_name() +", "+Sim_system.get_entity(ev.get_src()).get_id());
	  	                               Released = true;
	  	                               break;
	  	                          }
	  	                         ev = new Sim_event();
	                         	  ev = this.NODE_listen(); 
	  	                            
	  	                       	   } //end while(ev.get_data()!=null)
	                         	   
			 }//end if (!released)
			 
	                      
	                         	   
	                         	   //Step 2.25: release all children
	                         	  int w = 0;
	                              while(w< AdmittedHelpers.size()){
	                             	this.NODE_release(AdmittedHelpers.get(w), AdmittedHelpers.get(w).ctrlMsgDelTimeThroughLinkToParent);
	                                 sim_trace(1, "Step 2.25 Done: "+ this.get_name()+", "+ this.get_id()+" sent Released notification to "+ AdmittedHelpers.get(w).get_name()+ ", "+ AdmittedHelpers.get(w).get_id());

	                             	pr.oppnet = this.NODE_remNode(AdmittedHelpers.get(w), pr.oppnet);
	                               sim_trace(1, "Step 2.26 Done: "+ this.get_name()+", "+ this.get_id()+" removed "+ AdmittedHelpers.get(w).get_name()+ ", "+ AdmittedHelpers.get(w).get_id() + " from oppnet");
	                                
	                            	  
	                                  w++;
	                              }
	                       
	                           
	                          } // end if (!Done)

        }//if (admitted)
		
			SimOutput so = new SimOutput();
			String filename;
			PrintWriter oppnetFileWriter;

			if(this.AdmittedHelpers.size()>0){
				filename = "HelperIntegTime.txt";
				oppnetFileWriter = null;
			    this.sumHelperItegTimePerInvNodePerIter = so.calculate_Sum(this.hlprIntegTime);
			    so.outputFile1(this.hlprIntegTime.size(), true, filename, oppnetFileWriter, "Sum Helper Integ Time Per Node Per Iter", this.sumHelperItegTimePerInvNodePerIter, this.get_name(), this.get_id());

		   
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
			
		   filename = "NumRequestedHelpers.txt";
		       oppnetFileWriter= null;
	         so.outputFile(true, filename, oppnetFileWriter, "Number of Requested Helpers Per Node Per Iter", this.numOfRequestedHelpersPerNode, this.get_name(), this.get_id());
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
				
			filename = "NumJoinedHelpers.txt";
			oppnetFileWriter = null;
			so.outputFile(true, filename, oppnetFileWriter, "Number of Joined Helpers Per Node Per Iter", this.numOfJoindHelpersPerNode, this.get_name(), this.get_id());
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
			filename = "NumRefusedHelpers.txt";
			oppnetFileWriter = null;
			so.outputFile(true, filename, oppnetFileWriter, "Number of Refused Helpers Per Node Per Iter", (this.numOfRequestedHelpersPerNode - this.numOfJoindHelpersPerNode), this.get_name(), this.get_id());
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			filename = "NumAdmittedHelpers.txt";
			oppnetFileWriter = null;
			so.outputFile(true, filename, oppnetFileWriter, "Number of Admitted Helpers Per Node Per Iter", (this.AdmittedHelpers.size()), this.get_name(), this.get_id());
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			}
			if(admitted){
			filename = "HelperUnhurriedTask.txt";
			File f = new File(filename);

			oppnetFileWriter = null;
			int value;
			if (this.performedUnhurried) value = 1;
			else value = 0;
			so.outputFile(true, filename, oppnetFileWriter, "Performed Unhurried Task", value, this.get_name(), this.get_id());
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			
			filename = "HelperUrgentTask.txt";
			File f2 = new File(filename);
			oppnetFileWriter = null;
			if (this.performedUrgent) value = 1;
			else value = 0;	
			so.outputFile(true, filename, oppnetFileWriter, "Performed Urgent Task", value, this.get_name(), this.get_id());
			
/////////////////////////////////////////////////////////////////////////////////////////////////////////
		
			
			 this.sumTasksRunTimes = so.calculate_Sum(this.tasksRunTimes);
			    
		    	filename = "TasksRuntimes.txt";
			   //File file1 = new File(filename);
		         oppnetFileWriter = null;
		        so.outputFile1(this.tasksRunTimes.size(), true, filename, oppnetFileWriter, "Sum Task Runtimes Per Node Per Iter", this.sumTasksRunTimes, this.get_name(), this.get_id());

		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////		
			
		 } //end body   
        
	/* This method sorts devices based on their type. This simulates the inviting node ability to
	 * recognize the type of the device after scanning is done and sends requests to devices accordingly.
	 * For example, when a tablet scans BT spectrum for BT devices and it finds a phone, a printer 
	 * and a TV it chooses the phone "first" since it is most likely to do the goal task
	 */
	@Override
	public int compareTo(Helper comparesto) {
		 int compareage=((Helper)comparesto).sortingOrder;
	       
	       return this.sortingOrder-compareage;

	}

}
