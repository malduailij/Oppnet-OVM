package pack;
import java.util.ArrayList;

import eduni.simjava.*;


public class Node extends Sim_entity{
	
	public String device;
	public Location location;
    public ArrayList<String> Comm_Channels = new ArrayList<String>();
    public ArrayList <String> DeviceApps = new ArrayList <String> ();
    public boolean OPP;
    public boolean Coordinator;
    public double msgPayloadReadtime;
    public double task2Runtime;
    public double task3Runtime;

    //public Parameters pr = new Parameters();
	public Node(String name, double msgPayloadReadTime) {
		super(name);
	//	pr = p;
		this.msgPayloadReadtime = msgPayloadReadTime;
	}
	
	/// Primitives
	
   
//////////////////////////////////////////////////////////////////////////
	public ArrayList<Node> NODE_addNode(ArrayList<Node> oppnet, Helper Candidate_Helper){
       
         oppnet.add(Candidate_Helper);       
         return oppnet;
       	   
	   }
///////////////////////////////////////////////////////////////////////////
 
	   public boolean NODE_discover(Helper candidateHelper){
			  boolean canForward = false; 
		   if((candidateHelper.OPP == true)||(candidateHelper.Coordinator))
			   canForward = true;
		   return canForward;	   
		   }
//////////////////////////////////////////////////////////////////////////
	   public boolean NODE_evalAdmit(Sim_event ev, Helper Candidate_Helper){
		   boolean admit = false;
		   if(ev.get_data().equals("Join") && Candidate_Helper.get_name().equals(Sim_system.get_entity(ev.get_src()).get_name()) && Candidate_Helper.get_id() == (Sim_system.get_entity(ev.get_src()).get_id())){
                sim_schedule(Candidate_Helper.get_id(), Candidate_Helper.ctrlMsgDelTimeThroughLinkToParent, 17, "Admitted");
               admit = true;
		   }
          return admit;  
	   }
//////////////////////////////////////////////////////////////////////////
   
	   public Parameters NODE_initiate(Seed s){

			s.oppnetTasks.add("Goal Urgent SMS help object");
			s.oppnetTasks.add("Unhurried Log help object");
			s.oppnetTasks.add("Unhurried Upload help object");
			s.oppnetTasks.add("Unhurried Print help msg");
			s.oppnetTasks.add("Unhurried Display help msg");
			s.oppnetTasks.add("Urgent Forward oppnet tasks");
			s.oppnetTasks.add("Urgent Forward help object");

			s.pr.oppnet.add(s);
		   
			  return s.pr;
		   
	   }
//////////////////////////////////////////////////////////////////////////

	  public boolean NODE_isMember(ArrayList<Node> oppnet, Helper Candidate_Helper){
		 boolean member = false;
         if(oppnet.contains(Candidate_Helper)) member = true;
         else member = false;
         return member;  	  

	   }
//////////////////////////////////////////////////////////////////////////
	  public boolean NODE_joinOppnet(String category, double workloadRatio, Node invitingNode, double deliveryTime){
		  boolean joined = false;
		  if(((category.equals("Adhoc"))&& (workloadRatio<96) )|| category.equals("Reservist")){
	             sim_schedule(invitingNode.get_id(), deliveryTime, 23, "Join");
	             joined = true;
		  }
		  return joined;
		   
	  }
//////////////////////////////////////////////////////////////////////////

	  public Sim_event NODE_listen(){
		  Sim_event ev = new Sim_event();
      	   sim_get_next(ev);
      	   return ev;
      	   
	  }
//////////////////////////////////////////////////////////////////////////

	public boolean NODE_listen(String msg, String name, int id) {
		boolean r = false;
		 Sim_event ev1 = new Sim_event();
    	 sim_get_next(ev1);
    	 if (ev1.get_data()!=null){
		if(ev1.get_data().equals(msg)){
             sim_trace(1, name+","+ id+ " evaluated the message and source and it is "+msg+" from " + Sim_system.get_entity(ev1.get_src()).get_name() +", "+Sim_system.get_entity(ev1.get_src()).get_id());
             r = true;
		}
    	 }
		return r;

	}
	  
	  
//////////////////////////////////////////////////////////////////////////

	  public void NODE_processMsg(double msgReadTime){
         sim_process(msgReadTime);
   
	  }
//////////////////////////////////////////////////////////////////////////

	  public void NODE_release(Helper admittedHelper, double deliveryTime){
		  sim_schedule(admittedHelper.get_id(), deliveryTime, 113, "Released");
   
	  }
//////////////////////////////////////////////////////////////////////////

	  public ArrayList<Node> NODE_remNode(Helper admittedHelper, ArrayList<Node> oppnet){
		  oppnet.remove(admittedHelper);
          return oppnet;
          
	  }
//////////////////////////////////////////////////////////////////////////

	  public void NODE_report(Helper candidateHelper, double task2Runtime, int tag, Help helpObject){
		  sim_schedule(candidateHelper.get_id(), task2Runtime, tag, helpObject);
		   
	  }
//////////////////////////////////////////////////////////////////////////

	  public void NODE_reqHelp(Helper Candidate_Helper){
	  
		  sim_schedule(Candidate_Helper.get_id(), Candidate_Helper.ctrlMsgDelTimeThroughLinkToParent, 15, "ReqHelp");
       
		   
	  }
//////////////////////////////////////////////////////////////////////////
	  public boolean NODE_reqRelease(int id, String name, Node invitingNode, double deliveryTime, String msg){
		 boolean Released;
		 sim_schedule(invitingNode.get_id(), deliveryTime, 900, msg);
	 	 sim_trace(1, "Step 2.12b: "+ name+", " + id+" Sent Done notification to "+ invitingNode.get_name() +", "+ invitingNode.get_id());
	 	 Released = NODE_listen("Released", name, id);
	 	 return Released;
		   
	  }
//////////////////////////////////////////////////////////////////////////

	  public boolean NODE_runApp(Helper h, String DeviceTask, Help helpObject, Parameters pr){
		  boolean Done = false;
		//  int j = 0;
		 // while(j< DeviceTasks.size()){
		     if (DeviceTask.contains("SMS")){
      	      sim_process(pr.approxTask8Runtime);
      	      h.performedUrgent = true;
      	      h.tasksRunTimes.add(pr.approxTask8Runtime);
  	         } //end if (DeviceTasks.get(i).equals("SMS")
  	   
	  	     if (DeviceTask.contains("Display")){
			    System.out.println("Displaying help message" + helpObject.helpTextMsg.toString());
      	        sim_process(pr.task4Runtime);
      	        h.performedUnhurried = true;
      	        h.tasksRunTimes.add(pr.task4Runtime);

  	        } //end if (DeviceTasks.get(i).equals("Display Msg"))
  	
  	        if (DeviceTask.contains("Print")){
			   System.out.println("Printing help message" + helpObject.helpTextMsg.toString());
               sim_process(pr.task5Runtime);
               h.performedUnhurried = true;
     	        h.tasksRunTimes.add(pr.task5Runtime);


  	         } //end if (DeviceTasks.get(i).equals("Print")
  	
		  	if (DeviceTask.contains("Upload")){
		      	sim_process(pr.approxTask6Runtime);
		      	h.performedUnhurried = true;
		      	h.tasksRunTimes.add(pr.approxTask6Runtime);
		  	   } //end if (DeviceTasks.get(i).equals("Upload")
		  	   
		  	if (DeviceTask.contains("Log")){
		      	sim_process(pr.task7Runtime);
		      	h.performedUnhurried = true;
     	        h.tasksRunTimes.add(pr.task7Runtime);

		  	   } //end if (DeviceTasks.get(i).equals("Log")
		  	
  	
		  	sim_trace(1, "Step 2.11: "+ this.get_name()+", " + this.get_id()+" run app "+ DeviceTask);

		  	if (DeviceTask.contains("Goal")){
		  		Done = true;
		  		
		  	}
		
		  
		  return Done;
		   
	  }

	
//////////////////////////////////////////////////////////////////////////
  public ArrayList<Helper> NODE_scan(Node nd, Parameters prm, double dist){

	  ArrayList<Helper> candHlprs = new ArrayList<Helper>();
	  Helper cand;
      Location distance = new Location();
      for (int c = 0; c < prm.Helpers.size(); c++) {

			distance.X = Math.abs(prm.Helpers.get(c).location.X
					- nd.location.X);
			distance.Y = Math.abs(prm.Helpers.get(c).location.Y
					- nd.location.Y);
			distance.X = Math.floor(distance.X * 100) / 100;
			distance.Y = Math.floor(distance.Y * 100) / 100;
			boolean match = false;

			for (int x = 0; x < this.Comm_Channels.size(); x++) {
				for (int k = 0; k < prm.Helpers.get(c).Comm_Channels.size(); k++) {
					if (this.Comm_Channels.get(x).equals(prm.Helpers.get(c).Comm_Channels.get(k))
							&& distance.X <= dist
							&& distance.Y <= dist
							&& !(prm.oppnet.contains(prm.Helpers.get(c)))) {
						 
						match = true;
						if (this.Comm_Channels.get(x).equals("BT")) {
							prm.Helpers.get(c).linkWithParent = "BT";

							prm.Helpers.get(c).ctrlMsgDelTimeThroughLinkToParent = prm.actualBTdelTimeCtrlMsg;
							nd.task2Runtime = nd.msgPayloadReadtime
									+ prm.actualBTdelTimeHelpObjectMsg;
							nd.task3Runtime = nd.msgPayloadReadtime
									+ prm.actualBTdelTimeOppnetTaskMsg;
						} else if (this.Comm_Channels.get(x).equals(
								"Zigbee")) {
							prm.Helpers.get(c).linkWithParent = "Zigbee";
							prm.Helpers.get(c).ctrlMsgDelTimeThroughLinkToParent = prm.actualZigbeeDelTimeCtrlMsg;
							nd.task2Runtime = nd.msgPayloadReadtime
									+ prm.actualZigbeeDelTimeHelpObjectMsg;
							nd.task3Runtime = nd.msgPayloadReadtime
									+ prm.actualZigbeeDelTimeOppnetTaskMsg;
						} else if (this.Comm_Channels.get(x).equals(
								"WiFi")) {
							prm.Helpers.get(c).linkWithParent = "WiFi";
							prm.Helpers.get(c).ctrlMsgDelTimeThroughLinkToParent = prm.actualWiFiDelTimeCtrlMsg;
							nd.task2Runtime = nd.msgPayloadReadtime
									+ prm.actualWiFiDelTimeHelpObjectMsg;
							nd.task3Runtime = nd.msgPayloadReadtime
									+ prm.actualWiFiDelTimeOppnetTaskMsg;

						}
						candHlprs.add(prm.Helpers.get(c));

						break;
					}
				}

    	  if (match) break;
    	  }
          } //for(int i = 0; i<this.pr.Helpers.size(); i++){
		return candHlprs;
}
	

//////////////////////////////////////////////////////////////////////////

	 public boolean NODE_selectTask(Helper h, ArrayList<String> deviceApps, ArrayList<String> oppnetTasks, Help helpObject, Parameters pr){
		   boolean Done = false;
           ArrayList <String> deviceTasks = new ArrayList<String>();

		   if(deviceApps.size()>0){ 
			 int j = 0;
			 for(int ot = 0; ot <oppnetTasks.size(); ot++){		  
	            for(int i= 0; i<deviceApps.size(); i++){

	            if (oppnetTasks.get(ot).contains(deviceApps.get(i))){
	            	deviceTasks.add(oppnetTasks.get(ot));
          		    sim_trace(1, "Step 2.10: "+ this.get_name()+", " + this.get_id()+" select task "+ deviceTasks.get(j));
          		    Done = this.NODE_runApp(h, deviceTasks.get(j), helpObject, pr);
          		    if(Done) break;
 
          		    
          		    j++;
	            	}  	
	          } 
	            if (Done) break;
			 }
			 }
		 return Done;
	  }
  
 /* public boolean NODE_selectTask(Helper h, ArrayList<String> deviceApps, ArrayList<String> oppnetTasks, Help helpObject, Parameters pr){
	  boolean Done = false;
	  
		if (this.DeviceApps.size() > 0) {
			// Step 2.10: Node checks which of the oppnet tasks it can
			// perform (Node_selectTask) and (Node_runApp)
			ArrayList<String> DeviceTasks = new ArrayList<String>();
			int j = 0;
			for (int ot = 0; ot < oppnetTasks.size(); ot++) {
				for (int i = 0; i < DeviceApps.size(); i++) {

					if (oppnetTasks.get(ot).contains(DeviceApps.get(i))) {
						DeviceTasks.add(oppnetTasks.get(ot));
						sim_trace(1, "Step 2.10: " + this.get_name() + ", "
								+ this.get_id() + " select task "
								+ DeviceTasks.get(j));
						if (DeviceTasks.get(j).contains("SMS")) {
							sim_process(pr.approxTask8Runtime);
							h.performedUrgent = true;

						} // end if (DeviceTasks.get(i).equals("SMS")
						if (DeviceTasks.get(j).contains("Display")) {
							System.out.println("Displaying help message"
									+ helpObject.helpTextMsg.toString());
							sim_process(pr.task4Runtime);
							h.performedUnhurried = true;

						} // end if
							// (DeviceTasks.get(i).equals("Display Msg"))

						if (DeviceTasks.get(j).contains("Print")) {
							System.out.println("Printing help message"
									+ helpObject.helpTextMsg.toString());
							sim_process(pr.task5Runtime);
							h.performedUnhurried = true;


						} // end if (DeviceTasks.get(i).equals("Print")

						if (DeviceTasks.get(j).contains("Upload")) {
							sim_process(pr.approxTask6Runtime);
							h.performedUnhurried = true;


						} // end if (DeviceTasks.get(i).equals("Upload")
						if (DeviceTasks.get(j).contains("Log")) {
							sim_process(pr.task7Runtime);
							h.performedUnhurried = true;


						} // end if (DeviceTasks.get(i).equals("Log")

						sim_trace(1,
								"Step 2.11: " + this.get_name() + ", "
										+ this.get_id() + " run app "
										+ DeviceTasks.get(j));

						// Step 2.12: Node check if the task done is the
						// goal
						if (DeviceTasks.get(j).contains("Goal")) {
							Done = true;
							break;
						/*	sim_trace(1, "Step 2.12: " + this.get_name()
									+ ", " + this.get_id()
									+ " is done with the goal "
									+ DeviceTasks.get(j));
							sim_schedule(Inviting_Node.get_id(),
									this.ctrlMsgDelTimeThroughLinkToParent,
									900, "Done..ReqRelease");
							sim_trace(1, "Step 2.12b: " + this.get_name()
									+ ", " + this.get_id()
									+ " Sent Done notification to "
									+ Inviting_Node.get_name() + ", "
									+ Inviting_Node.get_id());
							Released = theReleaseMethod("son is done");
						}
						j++;
					}
				}
				if(Done) break;
			}
		}
	  
	  

	  return Done;
  }*/
//////////////////////////////////////////////////////////////////////////
	  
	  public void NODE_sendData(Helper candidateHelper, double task3Runtime, int tag,ArrayList<String> oppnetTasks){
 
	  sim_schedule(candidateHelper.get_id(), task3Runtime, 110, oppnetTasks);
	  }   
//////////////////////////////////////////////////////////////////////////

	  public void NODE_terminate(ArrayList<Node> oppnet, int id, String name){
		   oppnet.clear();
		   sim_trace(1, "Step 1.14 Done "+ name +", " +id+ " terminated oppnet");
		   
	  }
//////////////////////////////////////////////////////////////////////////

	  public boolean  NODE_validate(Sim_event ev){
		  boolean validated = false;
	       if(ev.get_data().equals("ReqHelp")){
	    	   validated = true;
	       }
		   return validated;
	  }
//////////////////////////////////////////////////////////////////////////

  
}