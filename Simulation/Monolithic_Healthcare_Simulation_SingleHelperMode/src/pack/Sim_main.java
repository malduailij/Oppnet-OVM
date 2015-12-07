package pack;

import java.io.*;
import java.util.ArrayList;

import eduni.simjava.Sim_entity;
import eduni.simjava.Sim_system;

public class Sim_main {

	public static void main(String[] args) throws IOException,
			InterruptedException {
		deleteExistingFile("HelperIntegTime.txt");
		deleteExistingFile("TasksRuntimes.txt");
		deleteExistingFile("OppnetSuccessTime.txt");
		deleteExistingFile("NumRequestedHelpers.txt");
		deleteExistingFile("NumJoinedHelpers.txt");
		deleteExistingFile("NumRefusedHelpers.txt");
		deleteExistingFile("NumAdmittedHelpers.txt");
		deleteExistingFile("HelperUnhurriedTask.txt");
		deleteExistingFile("HelperUrgentTask.txt");

		Sim_system.initialise();
		Sim_system.set_trace_detail(false, true, false);

		Create_Ent ce = new Create_Ent("Create_Entities");

		Sim_system.set_output_analysis(Sim_system.IND_REPLICATIONS, 30, 0.95);
		Sim_system.run();
	}
	public static void deleteExistingFile(String filename){
		File oppnetFile = new File(filename);
		if (oppnetFile.exists())
			oppnetFile.delete();
	}
}
