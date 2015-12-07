package pack;
import java.util.ArrayList;

import eduni.simjava.distributions.Sim_uniform_obj;


public class Parameters {

	
	// Input parameters for the simulation area
	public static double areaMaxX = 600;
	public static double areaMaxY = 600;
	
	// Input parameters for the node set
	
	public static int numOfHelpersMin = 20;
	public static int numOfHelpersMax = 60;
	
	// Input parameters for individual nodes
	
	public static int helperTypeMin = 1;
	public static int helperTypeMax = 9;
	
	public static double approxMsgPayloadReadTimeRegHlpr = 0;

	public static double msgPayloadReadTimeLiteMin = 29;
	public static double msgPayloadReadTimeLiteMax = 43;
	
	public static double msgPayloadReadTimeSeedMin = 29;
	public static double msgPayloadReadTimeSeedMax = 43;
	
	public static double task1RuntimeMin = 29;
	public static double task1RuntimeMax = 43;
	
	public static double task2RuntimeSeedBTMin = 31.582;
	public static double task2RuntimeSeedBTMax = 45.582;
	public static double approxTask2RuntimeRegHlprBT = 2.582;
	
	public static double approxTask2RuntimeRegHlprWiFi = 0.765;
	
	public static double approxTask2RuntimeRegHlprZigbee = 34.84;


	public static double task3RuntimeSeedBTMin = 30.566;
	public static double task3RuntimeSeedBTMax = 44.566;
	
	public static double approxTask3RuntimeRegHlprBT = 1.566;
	public static double approxTask3RuntimeRegHlprWiFi = 0.4736;
	public static double approxTask3RuntimeRegHlprZigbee = 21.12;

	public static double task4RuntimeMin = 5000;
	public static double task4RuntimeMax = 11000;
	
	public static double task5RuntimeMin = 12000;
	public static double task5RuntimeMax = 13000;
	
	public static double approxTask6Runtime = 0.765;
	
	public static double task7RuntimeMin = 10;
	public static double task7RuntimeMax = 30;
	
	public static double approxTask8Runtime = 4060;
	
	public static double helperWorkloadRatioMin = 0;
	public static double helperWorkloadRatioMax = 100;
	
	// Input parameters for links
	
	public static double actualZigbeeDelTimeCtrlMsg = 4.928;
	public static double actualZigbeeDelTimeHelpObjectMsg = 34.84;
	public static double actualZigbeeDelTimeOppnetTaskMsg = 21.12;

	public static double actualBTdelTimeCtrlMsg = 0.383;
	public static double actualBTdelTimeHelpObjectMsg = 2.582;
	public static double actualBTdelTimeOppnetTaskMsg = 1.566;
	
	public static double actualWiFiDelTimeCtrlMsg = 0.1312;
	public static double actualWiFiDelTimeHelpObjectMsg = 0.765;
	public static double actualWiFiDelTimeOppnetTaskMsg = 0.4736;
	
	public static double actualCellDelTimeHelpTextMsg = 4060;

	///Random Variables
	public int numOfHelpers;
		
	public int helperType;
	
	public double msgPayloadReadTimeLite;
	public double msgPayloadReadTimeSeed;
	
	public double task1Runtime;
	
	public double task2RuntimeSeedBT;
	
	
	public double task3RuntimeSeedBT;
	

	public double task4Runtime;
	
	public double task5Runtime;

	public double task7Runtime;
	

	public ArrayList <Node>oppnet = new ArrayList<Node>();
	public ArrayList <Helper> Helpers = new ArrayList<Helper>();




}
