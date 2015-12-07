package pack;
import java.util.ArrayList;

import eduni.simjava.*;


public class Node extends Sim_entity{
	public Measures m = new Measures();
	public String device;
	public Location location;
    public ArrayList<String> Comm_Channels = new ArrayList<String>();
    public ArrayList <String> DeviceApps = new ArrayList <String> ();
    public boolean OPP;
    public boolean Coordinator;
    public double msgPayloadReadtime;

    public Node(String name, double msgPayloadRunTime) {
		super(name);
		this.msgPayloadReadtime = msgPayloadRunTime;
	}

}