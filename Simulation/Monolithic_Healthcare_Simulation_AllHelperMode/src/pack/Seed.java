package pack;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;

import eduni.simjava.Sim_event;
import eduni.simjava.Sim_system;

public class Seed extends Node {

	public Parameters pr = new Parameters();

	private ArrayList<Helper> CandidateHelpers = new ArrayList<Helper>();

	private ArrayList<Helper> AdmittedHelpers = new ArrayList<Helper>();

	private ArrayList<String> oppnetTasks = new ArrayList<String>();
	private ArrayList<Double> hlprIntegTime = new ArrayList<Double>();
	private double sumHelperItegTimePerInvNodePerIter;
	private double oppnetTimeToSucceedPerIter;
	private int numOfRequestedHelpersPerNode = 0;
	private int numOfJoindHelpersPerNode = 0;
	private double task2Runtime;
	private double task3Runtime;
	public int numOfRefusedHelpersPerNode = 0;
	public ArrayList<Double> tasksRunTimes = new ArrayList<Double>();
	public double sumTasksRunTimes = 0;

	public Seed(String name, Parameters p, double msgPayloadReadTime) {
		super(name, msgPayloadReadTime);
		pr = p;
		this.msgPayloadReadtime = msgPayloadReadTime;
	}

	public void body() {

		boolean Done = false;
		Helper Candidate_Helper = null;
		int AH = 0;
		task2Runtime = pr.task2RuntimeSeedBT;
		task3Runtime = pr.task3RuntimeSeedBT;
		Sim_event ev = new Sim_event();

		// Step 1.1: seed initiates oppnet (Node_initiate)
		Help helpObject = new Help();

		this.oppnetTasks.add("Goal Urgent SMS help object");
		this.oppnetTasks.add("Unhurried Log help object");
		this.oppnetTasks.add("Unhurried Upload help object");
		this.oppnetTasks.add("Unhurried Print help msg");
		this.oppnetTasks.add("Unhurried Display help msg");
		this.oppnetTasks.add("Urgent Forward oppnet tasks");
		this.oppnetTasks.add("Urgent Forward help object");

		pr.oppnet.add(this);
		this.tasksRunTimes.add(pr.task1Runtime);
		sim_process(pr.task1Runtime);

		sim_trace(1,
				"===========================================================");
		sim_trace(1, "Step 1.1 Done: " + this.get_name() + " initiated oppnet");

		// Step 1.2: wristband scans for ad hoc helpers within range(Node_scan)
		Location distance = new Location();

		for (int i = 0; i < pr.Helpers.size(); i++) {
			distance.X = Math.abs(pr.Helpers.get(i).location.X
					- this.location.X);
			distance.Y = Math.abs(pr.Helpers.get(i).location.Y
					- this.location.Y);
			distance.X = Math.floor(distance.X * 100) / 100;
			distance.Y = Math.floor(distance.Y * 100) / 100;
			if ((pr.Helpers.get(i).Comm_Channels.contains("BT"))
					&& distance.X <= 100 && distance.Y <= 100) {
				CandidateHelpers.add(pr.Helpers.get(i));
			}

		}
		sim_process(this.msgPayloadReadtime);
		double startTime = Math.floor(Sim_system.sim_clock() * 100) / 100;
		sim_trace(
				1,
				"Step 1.2 Done: "
						+ this.get_name()
						+ " is done scanning for helpers in range and found the following:");
		if (CandidateHelpers.size() == 0)
			sim_trace(1, "None");
		else {
			for (int i = 0; i < CandidateHelpers.size(); i++)
				sim_trace(1, this.get_name() + ", " + this.get_id()
						+ ", found " + CandidateHelpers.get(i).get_name()
						+ ", ID = " + CandidateHelpers.get(i).get_id());
		}

		int i = 0;

		while (i < CandidateHelpers.size()) {

			// Step 1.3.1: seed discovers services in candidate

			if ((CandidateHelpers.get(i).Comm_Channels.contains("BT") && CandidateHelpers
					.get(i).OPP)) {
				Candidate_Helper = CandidateHelpers.get(i);
				sim_trace(
						1,
						"Step 1.3.1 Done: " + this.get_name() + ", "
								+ this.get_id()
								+ " discovered forwarding services in "
								+ Candidate_Helper.get_name() + ", "
								+ Candidate_Helper.get_id());

				// Step 1.3.2: seed checks if the candidate helper is already a
				// member of Oppnet (Node_isMember)
				if (this.pr.oppnet.contains(Candidate_Helper)) {

					sim_trace(1,
							"Step 1.3.2 Done:" + Candidate_Helper.get_name()
									+ ", " + Candidate_Helper.get_id()
									+ " is already a member of oppnet");
				} else {
					sim_trace(1,
							"Step 1.3.2 Done:" + Candidate_Helper.get_name()
									+ ", " + Candidate_Helper.get_id()
									+ " is not a member of oppnet");

					// Step 1.3.3: seed sends a request for help to candidate
					// helper (Node_regHelp)

					sim_schedule(Candidate_Helper.get_id(),
							pr.actualBTdelTimeCtrlMsg, 15, "ReqHelp");
					this.numOfRequestedHelpersPerNode++;
					sim_trace(1,
							"Step 1.3.3 Done: " + this.get_name()
									+ " sent a request for help to "
									+ Candidate_Helper.get_name() + ", "
									+ Candidate_Helper.get_id());
					Candidate_Helper.linkWithParent = "BT";
					Candidate_Helper.ctrlMsgDelTimeThroughLinkToParent = pr.actualBTdelTimeCtrlMsg;
				}
			}// end if(CandidateHelpers.get(i).Comm_Channels.contains("BT") &&
				// CandidateHelpers.get(i).OPP)

			// Step 1.3.4: seed listen invitation acceptance from candidate
			// helper
			// (Node_listen)
			ev = new Sim_event();
			sim_get_next(ev);
			if (ev.get_data() != null) {

				sim_trace(1,
						"Step 1.3.4 Done: " + this.get_name()
								+ " received a message from a node with id "
								+ ev.get_src());

				// Step 1.3.5: seed evaluate the the node that accepted the
				// invitation (Node_evalAdmit)
				sim_process(this.msgPayloadReadtime);

				if (ev.get_data().equals("Done..ReqRelease")) {
					sim_trace(
							1,
							this.get_name()
									+ ","
									+ this.get_id()
									+ " evaluated the message and source and it is DONE notification from "
									+ Sim_system.get_entity(ev.get_src())
											.get_name()
									+ ", "
									+ Sim_system.get_entity(ev.get_src())
											.get_id());
					Done = true;
					sim_trace(1, "OPPNET SUCCEEDED");
					this.oppnetTimeToSucceedPerIter = Math.floor(Sim_system
							.sim_clock() * 100) / 100;

					break;
				}

				else if (ev.get_data().equals("NoGrandKids..ReqRelease")) {
					sim_trace(
							1,
							this.get_name()
									+ ","
									+ this.get_id()
									+ " evaluated the message and source and it is NoGrandKids notification from "
									+ Sim_system.get_entity(ev.get_src())
											.get_name()
									+ ", "
									+ Sim_system.get_entity(ev.get_src())
											.get_id());
					AH++;
				}

				if (ev.get_data().equals("Join")
						&& Candidate_Helper.get_name().equals(
								Sim_system.get_entity(ev.get_src()).get_name())
						&& Candidate_Helper.get_id() == (Sim_system
								.get_entity(ev.get_src()).get_id())) {
					this.numOfJoindHelpersPerNode++;
					sim_trace(
							1,
							this.get_name()
									+ " evaluated the message and source and it is an invitation acceptance from "
									+ Candidate_Helper.get_name() + ", "
									+ Candidate_Helper.get_id());

					// Step 1.3.6: seed send admission notification to candidate
					// helper (Node_evalAdmit)
					sim_schedule(Candidate_Helper.get_id(),
							pr.actualBTdelTimeCtrlMsg, 17, "Admitted");
					sim_trace(1, "Step 1.7b Done: " + this.get_name()
							+ " sent an admission notification to "
							+ Candidate_Helper.get_name() + ", "
							+ Candidate_Helper.get_id());
					AdmittedHelpers.add(Candidate_Helper);

					// Step 1.3.7: seed adds admitted helper to oppnet
					// (Node_addNode)
					pr.oppnet.add(Candidate_Helper);

					sim_trace(1, this.get_name() + ", " + this.get_id()
							+ " adds " + Candidate_Helper.get_name() + ", "
							+ Candidate_Helper.get_id() + " to oppnet");
					double endTime = Math.floor(Sim_system.sim_clock() * 100) / 100;

					sim_trace(1, "Helper Integration Time From Seed= "
							+ (endTime - startTime));
					hlprIntegTime.add((endTime - startTime));
					// Step 1.3.8: seed sends help object to helper
					// (Node_report)
					sim_schedule(Candidate_Helper.get_id(),
							pr.task2RuntimeSeedBT, 19, helpObject);
					sim_trace(1, "Step 1.3.8 Done: " + this.get_name() + ", "
							+ this.get_id() + " sent help object to "
							+ Candidate_Helper.get_name() + ", "
							+ Candidate_Helper.get_id());
					this.tasksRunTimes.add(this.task2Runtime);

					// Step 1.3.9: seed sends oppnet tasks to admitted helper
					// (Node_sendData)

					sim_schedule(Candidate_Helper.get_id(),
							pr.task3RuntimeSeedBT, 110, oppnetTasks);
					sim_trace(1, "Step 1.3.9 Done: " + this.get_name() + ", "
							+ this.get_id() + " sent oppnet tasks to "
							+ Candidate_Helper.get_name() + ", "
							+ Candidate_Helper.get_id());
					this.tasksRunTimes.add(this.task3Runtime);

				} // end if(ev.get_data().equals("Join") &&
					// Candidate_Helper.get_name().equals(Sim_system.get_entity(ev.get_src()).get_name()))
			}// end if(ev.get_data() != null)
			i++;
		}// end while(i<CandidateHelpers.size())

		// Step 1.10: listen to Done or not Done from helper
		boolean Failed = false;
		if (!Done) {
			ev = new Sim_event();
			sim_get_next(ev);

			while (ev.get_data() != null) {
				sim_trace(1,
						this.get_name()
								+ " received a message from a node with id "
								+ ev.get_src());
				// Step 1.11: processes the message
				sim_process(this.msgPayloadReadtime);

				if (ev.get_data().equals("Done..ReqRelease")) {
					sim_trace(
							1,
							this.get_name()
									+ ","
									+ this.get_id()
									+ " evaluated the message and source and it is DONE notification from "
									+ Sim_system.get_entity(ev.get_src())
											.get_name()
									+ ", "
									+ Sim_system.get_entity(ev.get_src())
											.get_id());
					Done = true;
					sim_trace(1, "OPPNET SUCCEEDED");
					this.oppnetTimeToSucceedPerIter = Math.floor(Sim_system
							.sim_clock() * 100) / 100;
					break;
				}

				else if (ev.get_data().equals("NoGrandKids..ReqRelease")) {
					sim_trace(
							1,
							"Step 1.12 Done: "
									+ this.get_name()
									+ ","
									+ this.get_id()
									+ " evaluated the message and source and it is NoGrandKids notification from "
									+ Sim_system.get_entity(ev.get_src())
											.get_name()
									+ ", "
									+ Sim_system.get_entity(ev.get_src())
											.get_id());
					AH++;
					System.out
							.println("Seed Evaluated the message and it is NOGrandKidsD notification from"
									+ Sim_system.get_entity(ev.get_src())
											.get_name()
									+ ", "
									+ Sim_system.get_entity(ev.get_src())
											.get_id());
					// All the helpers could not do the goal nor found
					// helpers in their range
					if (AH == AdmittedHelpers.size()) {
						Failed = true;
						break;
					}
				}

				ev = new Sim_event();
				sim_wait(ev);

			}// end while
		}
		sim_trace(1, "AdmittedHelper size = " + AdmittedHelpers.size());
		sim_trace(1, "AH = " + AH);

		if (!Done) {
			sim_trace(1, "OPPNET FAILED");
		}

		// Step 1.13 release admitted helpers
		int X = 0;
		while (X < AdmittedHelpers.size()) {
			sim_schedule(AdmittedHelpers.get(X).get_id(),
					pr.actualBTdelTimeCtrlMsg, 113, "Released");
			sim_trace(1,
					"Step 1.13 Done: " + this.get_name() + ", " + this.get_id()
							+ " sent Released notification to "
							+ AdmittedHelpers.get(X).get_name() + ", "
							+ AdmittedHelpers.get(X).get_id());
			pr.oppnet.remove(AdmittedHelpers.get(X));
			// Step 1.14 remove admitted helper from list of oppnet

			sim_trace(1,
					"Step 1.14 Done: " + this.get_name() + ", " + this.get_id()
							+ " removed " + AdmittedHelpers.get(X).get_name()
							+ ", " + AdmittedHelpers.get(X).get_id()
							+ " from oppnet");

			X++;
		}

		// Step 1.15 terminates oppnet

		pr.oppnet.clear();
		sim_trace(1,
				"Step 1.15 Done: " + this.get_name() + ", " + this.get_id()
						+ " terminated oppnet");

		// ///////////////////////////////////////////////////////////////////////////////////////

		String filename;
		SimOutput so = new SimOutput();
		this.sumHelperItegTimePerInvNodePerIter = so
				.calculate_Sum(this.hlprIntegTime);

		filename = "HelperIntegTime.txt";
		File oppnetFile = new File(filename);
		PrintWriter oppnetFileWriter = null;
		so.outputFile1(this.hlprIntegTime.size(), Done, filename,
				oppnetFileWriter, "Sum Helper Integ Time Per Node Per Iter",
				this.sumHelperItegTimePerInvNodePerIter, this.get_name(),
				this.get_id());

		// ////////////////////////////////////////////////////////////////////////////////////////////////////////

		this.sumTasksRunTimes = so.calculate_Sum(this.tasksRunTimes);

		filename = "TasksRuntimes.txt";
		File file1 = new File(filename);
		oppnetFileWriter = null;
		so.outputFile1(this.tasksRunTimes.size(), Done, filename,
				oppnetFileWriter, "Sum Task Runtimes Per Node Per Iter",
				this.sumTasksRunTimes, this.get_name(), this.get_id());
		// ///////////////////////////////////////////////////////////////////////////////////////////////////////////
		filename = "OppnetSuccessTime.txt";
		File file2 = new File(filename);
		oppnetFileWriter = null;
		if (Done) {
			// PrintWriter oppnetFileWriter2 = null;
			so.outputFile(Done, filename, oppnetFileWriter,
					"Oppnet Time to Succeed Per Iter",
					this.oppnetTimeToSucceedPerIter, this.get_name(),
					this.get_id());

		}
		// ////////////////////////////////////////////////////////////////////////////////////////////////////////

		filename = "NumRequestedHelpers.txt";
		File file3 = new File(filename);
		oppnetFileWriter = null;
		so.outputFile(Done, filename, oppnetFileWriter,
				"Number of Requested Helpers Per Node Per Iter",
				this.numOfRequestedHelpersPerNode, this.get_name(),
				this.get_id());
		// ////////////////////////////////////////////////////////////////////////////////////////////////////////

		filename = "NumJoinedHelpers.txt";
		File file4 = new File(filename);
		oppnetFileWriter = null;
		so.outputFile(Done, filename, oppnetFileWriter,
				"Number of Joined Helpers Per Node Per Iter",
				this.numOfJoindHelpersPerNode, this.get_name(), this.get_id());
		// /////////////////////////////////////////////////////////////////////////////////////////////////////////
		filename = "NumRefusedHelpers.txt";
		File file5 = new File(filename);
		oppnetFileWriter = null;
		so.outputFile(Done, filename, oppnetFileWriter,
				"Number of Refused Helpers Per Node Per Iter",
				(this.numOfRefusedHelpersPerNode), this.get_name(),
				this.get_id());
		// /////////////////////////////////////////////////////////////////////////////////////////////////////////
		filename = "NumAdmittedHelpers.txt";
		File file6 = new File(filename);
		oppnetFileWriter = null;
		so.outputFile(Done, filename, oppnetFileWriter,
				"Number of Admitted Helpers Per Node Per Iter",
				(this.AdmittedHelpers.size()), this.get_name(), this.get_id());
		// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
		filename = "HelperUnhurriedTask.txt";
		File file7 = new File(filename);
		oppnetFileWriter = null;
		so.outputFile(Done, filename, oppnetFileWriter,
				"Performed Unhurried Task", 0, this.get_name(), this.get_id());
		// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

		filename = "HelperUrgentTask.txt";
		File file8 = new File(filename);
		oppnetFileWriter = null;

		so.outputFile(Done, filename, oppnetFileWriter,
				"Performed Urgent Task", 1, this.get_name(), this.get_id());
		// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

	}

}
