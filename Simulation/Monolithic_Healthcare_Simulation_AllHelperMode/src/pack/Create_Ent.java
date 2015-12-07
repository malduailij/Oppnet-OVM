package pack;

import java.util.*;

import eduni.simjava.*;
import eduni.simjava.distributions.Sim_uniform_obj;

public class Create_Ent extends Sim_entity{
	Parameters p = new Parameters();
	public Sim_uniform_obj numOfHelpers_Generator;
	public Sim_uniform_obj helperType_Generator;
	public Sim_uniform_obj x_coordinate_Generator;
	public Sim_uniform_obj y_coordinate_Generator;
	public Sim_uniform_obj msgPayloadReadTimeLite_Generator;
	public Sim_uniform_obj msgPayloadReadTimeSeed_Generator;
	public Sim_uniform_obj task1Runtime_Generator;
	public Sim_uniform_obj task2RuntimeSeedBT_Generator;
	public Sim_uniform_obj task3RuntimeSeedBT_Generator;
	public Sim_uniform_obj task4Runtime_Generator;
	public Sim_uniform_obj task5Runtime_Generator;
	public Sim_uniform_obj task7Runtime_Generator;
	public Sim_uniform_obj helperWorkloadRatio_Generator;
	



	public Create_Ent(String arg0) {
		super(arg0);
	
		numOfHelpers_Generator = new Sim_uniform_obj("numOfHelpers", p.numOfHelpersMin, p.numOfHelpersMax);
	    add_generator(numOfHelpers_Generator);
	    
	    helperType_Generator = new Sim_uniform_obj("helperType", p.helperTypeMin, p.helperTypeMax);
	    add_generator(helperType_Generator);
	    
	    x_coordinate_Generator = new Sim_uniform_obj("xCoordinate", 0, p.areaMaxX);
	    add_generator(x_coordinate_Generator);
	    
	    y_coordinate_Generator = new Sim_uniform_obj("yCoordinate", 0, p.areaMaxY);
	    add_generator(y_coordinate_Generator);
	    
	    msgPayloadReadTimeLite_Generator = new Sim_uniform_obj("msgPayloadReadTimeLite", p.msgPayloadReadTimeLiteMin, p.msgPayloadReadTimeLiteMax);
	    add_generator(msgPayloadReadTimeLite_Generator);
	    
		msgPayloadReadTimeSeed_Generator = new Sim_uniform_obj("msgPayloadReadTimeSeed", p.msgPayloadReadTimeSeedMin, p.msgPayloadReadTimeSeedMax);
		add_generator(msgPayloadReadTimeSeed_Generator);
		
		task1Runtime_Generator = new Sim_uniform_obj("task1Runtime", p.task1RuntimeMin, p.task1RuntimeMax);
		add_generator(task1Runtime_Generator);
		
		task2RuntimeSeedBT_Generator = new Sim_uniform_obj("task2RuntimeSeedBT", p.task2RuntimeSeedBTMin, p.task2RuntimeSeedBTMax);
		add_generator(task2RuntimeSeedBT_Generator);
		
		task3RuntimeSeedBT_Generator = new Sim_uniform_obj("task3RuntimeSeedBT", p.task3RuntimeSeedBTMin, p.task3RuntimeSeedBTMax);
		add_generator(task3RuntimeSeedBT_Generator);
		
		task4Runtime_Generator = new Sim_uniform_obj("task4Runtime", p.task4RuntimeMin, p.task4RuntimeMax);
		add_generator(task4Runtime_Generator);

		task5Runtime_Generator = new Sim_uniform_obj("task5Runtime", p.task5RuntimeMin, p.task5RuntimeMax);
		add_generator(task5Runtime_Generator);

		task7Runtime_Generator = new Sim_uniform_obj("task7Runtime", p.task7RuntimeMin, p.task7RuntimeMax);
		add_generator(task7Runtime_Generator);

		helperWorkloadRatio_Generator = new Sim_uniform_obj("helperWorkloadRatio", p.helperWorkloadRatioMin, p.helperWorkloadRatioMax);
		add_generator(helperWorkloadRatio_Generator);
			
	}
	
	public void body() {
		if (p.Helpers.size() >0)
			p.Helpers.clear();
		if (p.oppnet.size() >0)
			p.oppnet.clear();
		
	
		p.msgPayloadReadTimeLite = msgPayloadReadTimeLite_Generator.sample();
		
		p.msgPayloadReadTimeSeed = msgPayloadReadTimeSeed_Generator.sample();
		
	    p.task1Runtime = task1Runtime_Generator.sample();
		
		p.task2RuntimeSeedBT = task2RuntimeSeedBT_Generator.sample();
		p.task3RuntimeSeedBT = task3RuntimeSeedBT_Generator.sample();

		
		p.task4Runtime = task4Runtime_Generator.sample();
	
		p.task5Runtime = task5Runtime_Generator.sample();

		p.task7Runtime = task7Runtime_Generator.sample();

	
		ArrayList <Location> loc = new ArrayList<Location>();
		
		// creating the seed 
		Seed s = new Seed("Wristband", p, p.msgPayloadReadTimeSeed);
		s.device = "Wristband";
		s.Comm_Channels.add("BT");
		s.OPP = true;

		if (s.pr.Helpers.size()>0) s.pr.Helpers.clear();

		Location seed_loc = new Location();
		seed_loc.X = x_coordinate_Generator.sample();
		seed_loc.Y = y_coordinate_Generator.sample();		
		seed_loc.X = Math.floor(seed_loc.X * 100) / 100;
		seed_loc.Y = Math.floor(seed_loc.Y * 100) / 100;

		s.location = seed_loc;
		loc.add(s.location);
	
		//generating number of helpers inside the operations area

		Helper h = null;
		p.numOfHelpers = (int) numOfHelpers_Generator.sample();
		int count = p.numOfHelpers;
		//generating types of helpers inside the operations area
		while(count >0){
			count = count -1;
			p.helperType = (int) helperType_Generator.sample();
			
			
			switch(p.helperType){
			case 1: 
				    h = new Regular_Helper("Tablet1", p, p.approxMsgPayloadReadTimeRegHlpr);
					h.device = "Tablet1";
					h.sortingOrder = 2;
					h.category = "Adhoc";
					h.Comm_Channels.add("BT");
					h.Comm_Channels.add("Zigbee");
					h.DeviceApps.add("Display");
					h.OPP = true;
					h.Coordinator = true;
				    h.helperWorkloadRatio = helperWorkloadRatio_Generator.sample();
     				break;
					
			case 2: 
				    h = new Lite("Printer", p, p.msgPayloadReadTimeLite);
					h.device = "Printer";
					h.sortingOrder = 2;
					h.category = "Adhoc";
					h.Comm_Channels.add("BT");
					h.OPP = true;

					h.Comm_Channels.add("Zigbee");
					h.DeviceApps.add("Print");
					h.Coordinator = true;
				    h.helperWorkloadRatio = helperWorkloadRatio_Generator.sample();

					break;
					
			case 3: 
		          h = new Lite("ParkingMeter", p, p.msgPayloadReadTimeLite);
		          h.device = "ParkingMeter";
		          h.sortingOrder = 3;
				  h.category = "Adhoc";
				  h.Comm_Channels.add("BT");
				  h.OPP = true;

				  h.Comm_Channels.add("Zigbee");
				  h.Coordinator = true; 
				  h.helperWorkloadRatio = helperWorkloadRatio_Generator.sample();

				  break;
					
			case 4: 
					h = new Lite("Streetlight", p, p.msgPayloadReadTimeLite);
					h.device = "Streetlight";
					h.sortingOrder= 3;
					h.category = "Adhoc";
					h.Comm_Channels.add("BT");
					h.OPP = true;

					h.Comm_Channels.add("Zigbee");
					h.Coordinator = true;
				    h.helperWorkloadRatio = helperWorkloadRatio_Generator.sample();

					break;

			case 5: 
					h = new Regular_Helper("TV", p, p.approxMsgPayloadReadTimeRegHlpr);
					h.device = "TV";
					h.sortingOrder = 2;
					h.category = "Reservist";
					h.Comm_Channels.add("BT");
					h.Comm_Channels.add("Zigbee");
					h.DeviceApps.add("Display");
					h.OPP = true;
					h.Coordinator = true;
				    h.helperWorkloadRatio = helperWorkloadRatio_Generator.sample();

					break;
					
			case 6: 
				    h = new Regular_Helper("Tablet2", p, p.approxMsgPayloadReadTimeRegHlpr);
					h.device = "Tablet2";
					h.sortingOrder= 2;
					h.category = "Adhoc";
					h.Comm_Channels.add("BT");
					h.Comm_Channels.add("Zigbee");
					h.Comm_Channels.add("WiFi");
					h.DeviceApps.add("Display");
					h.DeviceApps.add("Upload");
					h.OPP = true;
					h.Coordinator = true;
				    h.helperWorkloadRatio = helperWorkloadRatio_Generator.sample();


					break;
					
			case 7: 
			       	h = new Regular_Helper("Smartphone", p, p.approxMsgPayloadReadTimeRegHlpr);
					h.device = "Smartphone";
					h.sortingOrder = 1;
					h.category = "Adhoc";
					h.Comm_Channels.add("BT");
					h.Comm_Channels.add("WiFi");
					h.Comm_Channels.add("Cellular");
					h.DeviceApps.add("SMS");
					h.DeviceApps.add("Display");
					h.OPP = true;

				    h.helperWorkloadRatio = helperWorkloadRatio_Generator.sample();

					break;
			case 8: 
		       	h = new Regular_Helper("DB_Server", p, p.approxMsgPayloadReadTimeRegHlpr);
				h.device = "DB_Server";
				h.sortingOrder= 2;
				h.category = "Adhoc";
				h.Comm_Channels.add("BT");
				h.Comm_Channels.add("WiFi");
				h.DeviceApps.add("Log");
				h.OPP = true;

			    h.helperWorkloadRatio = helperWorkloadRatio_Generator.sample();

				break;		
			
			default: break;
			}
			Location helper_loc = new Location();
			helper_loc.X = x_coordinate_Generator.sample();
			helper_loc.Y = y_coordinate_Generator.sample();	
			
			while (loc.contains(helper_loc)){
				helper_loc.X = x_coordinate_Generator.sample();
			    helper_loc.Y = y_coordinate_Generator.sample();
			}
			helper_loc.X = Math.floor(helper_loc.X * 100) / 100;
			helper_loc.Y = Math.floor(helper_loc.Y * 100) / 100;

			h.location = helper_loc;
			loc.add(h.location);
			p.Helpers.add(h);
			//Sort helpers by rank
			Collections.sort(p.Helpers);
			
			
		}
		  loc.clear();

	}

}
