package pack;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;

import eduni.simjava.Sim_event;
import eduni.simjava.Sim_system;

public class Helper extends Node implements Comparable<Helper> {

	public String category;

	public Parameters pr = new Parameters();
	public double helperWorkloadRatio;
	public String linkWithParent;
	public double ctrlMsgDelTimeThroughLinkToParent;
	public double task2Runtime;
	public double task3Runtime;
	public double sumTasksRunTimes = 0;
	public int sortingOrder;
	private ArrayList<Helper> CandidateHelpers = new ArrayList<Helper>();
	private ArrayList<Helper> AdmittedHelpers = new ArrayList<Helper>();

	private ArrayList<Double> hlprIntegTime = new ArrayList<Double>();
	private double sumHelperItegTimePerInvNodePerIter;

	private int numOfRequestedHelpersPerNode = 0;
	private int numOfJoindHelpersPerNode = 0;
	public int numOfRefusedHelpersPerNode = 0;
	public ArrayList<Double> tasksRunTimes = new ArrayList<Double>();

	private boolean performedUrgent = false;
	private boolean performedUnhurried = false;

	public Helper(String name, Parameters p, double msgPayloadRunTime) {
		super(name, msgPayloadRunTime);
		pr = p;
		this.msgPayloadReadtime = msgPayloadRunTime;
	}

	public void body() {
		ArrayList<String> oppnetTasks = null;
		Help helpObject = null;

		boolean admitted = false;
		boolean Done = false;
		boolean Released = false;
		boolean sent = false;
		Node Inviting_Node = null;

		Helper Candidate_Helper = null;

		// Step 2.1: Node listens to incoming messages

		Sim_event ev = new Sim_event();
		sim_get_next(ev);
		if (ev.get_data() != null) {
			sim_trace(
					1,
					"Step 2.1 Done: " + this.get_name() + ", " + this.get_id()
							+ " received a message from a node with id "
							+ ev.get_src());

			// Step 2.2: Node processes the message (Node_processMsg)
			sim_process(this.msgPayloadReadtime);
			sim_trace(1, "msgpayloadReadtime from helper "
					+ this.msgPayloadReadtime);

			if (ev.get_data().equals("ReqHelp")) {
				sim_trace(
						1,
						"Step 2.2 Done: "
								+ this.get_name()
								+ ", "
								+ this.get_id()
								+ " processes the message and it is a help request from "
								+ Sim_system.get_entity(ev.get_src())
										.get_name() + ", "
								+ Sim_system.get_entity(ev.get_src()).get_id());
				Inviting_Node = (Node) Sim_system.get_entity(ev.get_src());
				// Step 2.3: Node accepts invitation to oppnet
				if (((this.category.equals("Adhoc")) && (this.helperWorkloadRatio < 96))
						|| this.category.equals("Reservist")) {

					sim_schedule(Inviting_Node.get_id(),
							this.ctrlMsgDelTimeThroughLinkToParent, 23, "Join");
					sim_trace(
							1,
							"Step 2.3 Done: " + this.get_name() + ", "
									+ this.get_id()
									+ " accepted invitation of "
									+ Inviting_Node.get_name() + ", "
									+ Inviting_Node.get_id());

					// Step 2.4: Node listens to admission notification
					ev = new Sim_event();
					sim_get_next(ev);
					if (ev.get_data() != null) {
						sim_trace(1, "Step 2.4 Done: " + this.get_name() + ", "
								+ this.get_id()
								+ " received a message from a node with id "
								+ ev.get_src());

						// Step 2.5: Node process the message (Node_processMsg)
						sim_process(this.msgPayloadReadtime);

						if (ev.get_data().equals("Admitted")) {
							sim_trace(
									1,
									"Step 2.5 Done: "
											+ this.get_name()
											+ ", "
											+ this.get_id()
											+ " processes the message and it is admission notification from  "
											+ Sim_system.get_entity(
													ev.get_src()).get_name()
											+ ", "
											+ Sim_system.get_entity(
													ev.get_src()).get_id());
							admitted = true;
							Inviting_Node = (Node) Sim_system.get_entity(ev
									.get_src());

						}
					}
				}// if workloadratio
			} // end if(e.get_data().equals("ReqHelp")
		}// end if(ev.get_data()!=null))
		boolean received_helpObject = false;
		boolean received_oppnetTasks = false;

		if (admitted) {

			// Step 2.6: Node listen to help object and oppnet tasks from
			// inviting node (Node_listen)
			while ((!received_helpObject) || (!received_oppnetTasks)) {
				ev = new Sim_event();
				sim_get_next(ev);
				if (ev.get_data() != null) {
					sim_trace(
							1,
							"Step 2.6: "
									+ this.get_name()
									+ ", "
									+ this.get_id()
									+ " received a message from a node with id "
									+ ev.get_src());
					// Step 2.7: Node processes the message (Node_processMsg)
					sim_process(this.msgPayloadReadtime);

					if (!received_helpObject
							&& ((ev.get_tag() == 19) || (ev.get_tag() == 220))) {
						sim_trace(
								1,
								"Step 2.7: "
										+ this.get_name()
										+ ", "
										+ this.get_id()
										+ " processes the message and it is the help object from "
										+ Sim_system.get_entity(ev.get_src())
												.get_name() + ","
										+ ev.get_src());
						helpObject = (Help) ev.get_data();
						received_helpObject = true;
					}
					if (!received_oppnetTasks
							&& ((ev.get_tag() == 110) || (ev.get_tag() == 221))) {
						sim_trace(
								1,
								"Step 2.8: "
										+ this.get_name()
										+ ", "
										+ this.get_id()
										+ " processes the message and it is the oppnet tasks from "
										+ Sim_system.get_entity(ev.get_src())
												.get_name() + ","
										+ ev.get_src());
						oppnetTasks = (ArrayList) ev.get_data();
						received_oppnetTasks = true;
					}

				}
			}

			if (this.DeviceApps.size() > 0) {
				// Step 2.9: Node checks which of the oppnet tasks it can
				// perform (Node_selectTask) and (Node_runApp)
				ArrayList<String> DeviceTasks = new ArrayList<String>();
				int j = 0;
				for (int ot = 0; ot < oppnetTasks.size(); ot++) {
					for (int i = 0; i < DeviceApps.size(); i++) {

						if (oppnetTasks.get(ot).contains(DeviceApps.get(i))) {
							DeviceTasks.add(oppnetTasks.get(ot));
							sim_trace(1, "Step 2.9: " + this.get_name() + ", "
									+ this.get_id() + " select task "
									+ DeviceTasks.get(j));
							if (DeviceTasks.get(j).contains("SMS")) {
								sim_process(pr.approxTask8Runtime);
								this.performedUrgent = true;
								this.tasksRunTimes.add(pr.approxTask8Runtime);

							} // end if (DeviceTasks.get(i).equals("SMS")

							if (DeviceTasks.get(j).contains("Display")) {
								System.out.println("Displaying help message"
										+ helpObject.helpTextMsg.toString());
								sim_process(pr.task4Runtime);
								this.performedUnhurried = true;
								this.tasksRunTimes.add(pr.task4Runtime);

							} // end if
								// (DeviceTasks.get(i).equals("Display Msg"))

							if (DeviceTasks.get(j).contains("Print")) {
								System.out.println("Printing help message"
										+ helpObject.helpTextMsg.toString());
								sim_process(pr.task5Runtime);
								this.performedUnhurried = true;
								this.tasksRunTimes.add(pr.task5Runtime);

							} // end if (DeviceTasks.get(i).equals("Print")

							if (DeviceTasks.get(j).contains("Upload")) {
								sim_process(pr.approxTask6Runtime);
								this.performedUnhurried = true;
								this.tasksRunTimes.add(pr.approxTask6Runtime);

							} // end if (DeviceTasks.get(i).equals("Upload")
							if (DeviceTasks.get(j).contains("Log")) {
								sim_process(pr.task7Runtime);
								this.performedUnhurried = true;
								this.tasksRunTimes.add(pr.task7Runtime);

							} // end if (DeviceTasks.get(i).equals("Log")

							sim_trace(1,
									"Step 2.10: " + this.get_name() + ", "
											+ this.get_id() + " run app "
											+ DeviceTasks.get(j));

							// Step 2.11: Node check if the task done is the
							// goal
							if (DeviceTasks.get(j).contains("Goal")) {
								Done = true;

								break;

							}
							j++;
						}
					}
					if (Done)
						break;
				}
			}
			if (Done) {
				sim_schedule(Inviting_Node.get_id(),
						this.ctrlMsgDelTimeThroughLinkToParent, 900,
						"Done..ReqRelease");
				sim_trace(
						1,
						"Step 2.11: " + this.get_name() + ", " + this.get_id()
								+ " Sent Done notification to "
								+ Inviting_Node.get_name() + ", "
								+ Inviting_Node.get_id());
				Released = theReleaseMethod("son is done");
			}
			if (!Done) {
				// Step 2.12: Helper did not do the goal.. so It scans for
				// candidate helpers to forward the message to them
				sim_trace(1,
						"Step 2.12: " + this.get_name() + ", " + this.get_id()
								+ " I could not do the goal,, I will forward");

				Location distance = new Location();
				for (int c = 0; c < this.pr.Helpers.size(); c++) {

					distance.X = Math.abs(this.pr.Helpers.get(c).location.X
							- this.location.X);
					distance.Y = Math.abs(this.pr.Helpers.get(c).location.Y
							- this.location.Y);
					distance.X = Math.floor(distance.X * 100) / 100;
					distance.Y = Math.floor(distance.Y * 100) / 100;
					boolean match = false;
					boolean found = false;
					for (int x = 0; x < this.Comm_Channels.size(); x++) {
						for (int k = 0; k < this.pr.Helpers.get(c).Comm_Channels
								.size(); k++) {
							if (this.Comm_Channels
									.get(x)
									.equals(this.pr.Helpers.get(c).Comm_Channels
											.get(k))
									&& distance.X <= 100
									&& distance.Y <= 100
									&& !(pr.oppnet.contains(this.pr.Helpers
											.get(c)))) {

								this.CandidateHelpers.add(this.pr.Helpers
										.get(c));

								match = true;
								if (this.Comm_Channels.get(x).equals("BT")) {
									pr.Helpers.get(c).linkWithParent = "BT";
									pr.Helpers.get(c).ctrlMsgDelTimeThroughLinkToParent = pr.actualBTdelTimeCtrlMsg;
									this.task2Runtime = this.msgPayloadReadtime
											+ pr.actualBTdelTimeHelpObjectMsg;
									this.task3Runtime = this.msgPayloadReadtime
											+ pr.actualBTdelTimeOppnetTaskMsg;
								} else if (this.Comm_Channels.get(x).equals(
										"Zigbee")) {
									pr.Helpers.get(c).linkWithParent = "Zigbee";
									pr.Helpers.get(c).ctrlMsgDelTimeThroughLinkToParent = pr.actualZigbeeDelTimeCtrlMsg;
									this.task2Runtime = this.msgPayloadReadtime
											+ pr.actualZigbeeDelTimeHelpObjectMsg;
									this.task3Runtime = this.msgPayloadReadtime
											+ pr.actualZigbeeDelTimeOppnetTaskMsg;
								} else if (this.Comm_Channels.get(x).equals(
										"WiFi")) {
									pr.Helpers.get(c).linkWithParent = "WiFi";
									pr.Helpers.get(c).ctrlMsgDelTimeThroughLinkToParent = pr.actualWiFiDelTimeCtrlMsg;
									this.task2Runtime = this.msgPayloadReadtime
											+ pr.actualWiFiDelTimeHelpObjectMsg;
									this.task3Runtime = this.msgPayloadReadtime
											+ pr.actualWiFiDelTimeOppnetTaskMsg;

								}
								break;
							}
						}

						if (match)
							break;
					}
				} // for(int i = 0; i<this.pr.Helpers.size(); i++){

				sim_process(this.msgPayloadReadtime);
				sim_trace(
						1,
						"Step 2.12a Done: "
								+ this.get_name()
								+ ", "
								+ this.get_id()
								+ " is done scanning for helpers in range and found the following:");
				double startTime = Math.floor(Sim_system.sim_clock() * 100) / 100;

				if (CandidateHelpers.size() == 0) {
					sim_trace(1, "None");
					sim_trace(
							1,
							"Step 2.12b: " + this.get_name() + ", "
									+ this.get_id()
									+ " Could not find grand kids");
					sim_schedule(Inviting_Node.get_id(),
							this.ctrlMsgDelTimeThroughLinkToParent, 212,
							"NoGrandKids..ReqRelease");
					sim_trace(
							1,
							"Step 2.13: " + this.get_name() + ", "
									+ this.get_id()
									+ " sent a NoGrandKids notification to "
									+ Inviting_Node.get_name() + ", "
									+ Inviting_Node.get_id());
					sent = true;
				}

				else {
					for (int z = 0; z < CandidateHelpers.size(); z++)
						sim_trace(1, this.get_name() + ", " + this.get_id()
								+ ", found "
								+ CandidateHelpers.get(z).get_name()
								+ ", ID = " + CandidateHelpers.get(z).get_id());
				}// end else

				int i = 0;
				while (i < CandidateHelpers.size()) {
					// Step 2.14: Node discovers services in candidate
					// helpers(Node_discover)

					if ((CandidateHelpers.get(i).Comm_Channels.contains("BT") && CandidateHelpers
							.get(i).OPP)
							|| (CandidateHelpers.get(i).Comm_Channels
									.contains("Zigbee") && CandidateHelpers
									.get(i).Coordinator)
							|| CandidateHelpers.get(i).Comm_Channels
									.contains("WiFi")) {
						Candidate_Helper = CandidateHelpers.get(i);
						sim_trace(1, "Step 2.14 Done: " + this.get_name()
								+ " ," + this.get_id()
								+ " discovered forwarding services in "
								+ Candidate_Helper.get_name() + ", "
								+ Candidate_Helper.get_id());

					} // end if
						// Step 2.15: Node checks if the candidate helper is
						// already a member of Oppnet (Node_isMember)

					String c_helper = CandidateHelpers.get(i).get_name() + ", "
							+ CandidateHelpers.get(i).get_id();
					if (pr.oppnet.contains(CandidateHelpers.get(i))) {

						sim_trace(1, "Step 2.15 Done:" + c_helper
								+ " is already a member of oppnet");
					} else {
						sim_trace(1, "Step 2.15 Done:" + c_helper
								+ " is not a member of oppnet");

						// Step 2.16: Node sends a request for help to candidate
						// helper (Node_regHelp)

						sim_schedule(
								Candidate_Helper.get_id(),
								Candidate_Helper.ctrlMsgDelTimeThroughLinkToParent,
								216, "ReqHelp");
						this.numOfRequestedHelpersPerNode++;
						sim_trace(1, "Step 2.16 Done: " + this.get_name()
								+ ", " + this.get_id()
								+ " sent a request for help to "
								+ Candidate_Helper.get_name() + ", "
								+ Candidate_Helper.get_id());
					}// end else

					// Step 2.17: Node listens to invitation acceptance from
					// candidate
					// helper (Node_listen)
					ev = new Sim_event();
					sim_get_next(ev);
					if (ev.get_data() != null) {

						sim_trace(1, "Step 2.17 Done: " + this.get_name()
								+ ", " + this.get_id()
								+ " received a message from a node with id "
								+ ev.get_src());

						sim_process(this.msgPayloadReadtime);

						if (ev.get_data().equals("Released")) {
							sim_trace(
									1,
									"Step 2.18a Done: "
											+ this.get_name()
											+ ", "
											+ this.get_id()
											+ " evaluated the message and source and it is released notification from "
											+ Inviting_Node.get_name() + ", "
											+ Inviting_Node.get_id());
							Released = true;
							break;
						}
						if (ev.get_data().equals("Done..ReqRelease")) {
							sim_trace(
									1,
									"Step 2.18a Done: "
											+ this.get_name()
											+ ", "
											+ this.get_id()
											+ " evaluated the message and source and it is Done notification from "
											+ Sim_system.get_entity(
													ev.get_src()).get_name()
											+ ", "
											+ Sim_system.get_entity(
													ev.get_src()).get_id());
							Done = true;
							sim_schedule(Inviting_Node.get_id(),
									this.ctrlMsgDelTimeThroughLinkToParent,
									900, "Done..ReqRelease");

							sim_trace(1, "Step 2.18 Done: " + this.get_name()
									+ ", " + this.get_id()
									+ " sent GrandKidsDone notification to "
									+ Inviting_Node.get_name() + ", "
									+ Inviting_Node.get_id());
							Released = theReleaseMethod("GrandKidsDone");
							if (Released)
								break;
							break;
						}
						// Step 2.18a: Node evaluate the the node that accepted
						// the invitation (Node_evalAdmit)
						if (ev.get_data().equals("Join")
								&& Candidate_Helper.get_name().equals(
										Sim_system.get_entity(ev.get_src())
												.get_name())) {
							this.numOfJoindHelpersPerNode++;

							sim_trace(
									1,
									"Step 2.18a Done: "
											+ this.get_name()
											+ ", "
											+ this.get_id()
											+ " evaluated the message and source and it is invitation acceptance from "
											+ Candidate_Helper.get_name()
											+ ", " + Candidate_Helper.get_id());

							// Step 2.18b: Node send admission notification to
							// candidate helper (Node_evalAdmit)
							sim_schedule(
									Candidate_Helper.get_id(),
									Candidate_Helper.ctrlMsgDelTimeThroughLinkToParent,
									218, "Admitted");
							sim_trace(1, "Step 2.18b Done: " + this.get_name()
									+ ", " + this.get_id()
									+ " sent an admission notification to "
									+ Candidate_Helper.get_name() + ", "
									+ Candidate_Helper.get_id());

							this.AdmittedHelpers.add(Candidate_Helper);
							pr.oppnet.add(Candidate_Helper);

							sim_trace(1, "Step 2.19a Done: " + this.get_name()
									+ ", " + this.get_id() + " added "
									+ Candidate_Helper.get_name() + ", "
									+ Candidate_Helper.get_id() + " to oppnet");
							double endTime = Math
									.floor(Sim_system.sim_clock() * 100) / 100;

							this.hlprIntegTime.add((endTime - startTime));

							// Step 2.20: Node sends help object to admitted
							// helper (Node_report)

							sim_schedule(Candidate_Helper.get_id(),
									this.task2Runtime, 220, helpObject);
							sim_trace(1, "Step 2.20 Done: " + this.get_name()
									+ ", " + this.get_id()
									+ " sent help object to "
									+ Candidate_Helper.get_name() + ", "
									+ Candidate_Helper.get_id());
							this.performedUrgent = true;
							this.tasksRunTimes.add(this.task2Runtime);

							// Step 2.21: Node sends oppnet tasks to admitted
							// helper (Node_sendData)

							sim_schedule(Candidate_Helper.get_id(),
									this.task3Runtime, 221, oppnetTasks);
							sim_trace(1, "Step 2.21 Done: " + this.get_name()
									+ ", " + this.get_id()
									+ " sent oppnet tasks to "
									+ Candidate_Helper.get_name() + ", "
									+ Candidate_Helper.get_id());
							this.tasksRunTimes.add(this.task3Runtime);

						} // end if(ev.get_data().equals("Join") &&
							// Candidate_Helper.get_name().equals(Sim_system.get_entity(ev.get_src()).get_name()))

					}// end if(ev.get_data() != null)

					i++;
				} // end while(i<CandidateHelpers.size())

				if (!Released && !Done) {

					// Step 2.22: helper listens to Done or not Done from
					// admitted helper or release from inviting node
					int AH = 0;
					ev = new Sim_event();
					sim_get_next(ev);

					while (ev.get_data() != null) {
						if (ev.get_data() != null) {
							sim_trace(
									1,
									"Step 2.22 Done: "
											+ this.get_name()
											+ " received a message from a node with id "
											+ ev.get_src());

							// Step 2.23 node process the message
							sim_process(this.msgPayloadReadtime);

							if (ev.get_data().equals("Done..ReqRelease")) {
								sim_trace(
										1,
										"Step 2.23 Done: "
												+ this.get_name()
												+ ","
												+ this.get_id()
												+ " evaluated the message and source and it is DONE notification from "
												+ Sim_system.get_entity(
														ev.get_src())
														.get_name()
												+ ", "
												+ Sim_system.get_entity(
														ev.get_src()).get_id());
								Done = true;

								// Step 2.24:Helper sends to inviting node that
								// its admitted helpers done the job

								sim_schedule(Inviting_Node.get_id(),
										this.ctrlMsgDelTimeThroughLinkToParent,
										900, "Done..ReqRelease");

								sim_trace(
										1,
										"Step 2.24: "
												+ this.get_name()
												+ ", "
												+ this.get_id()
												+ " sent GrandKidsDone notification to "
												+ Inviting_Node.get_name()
												+ ", " + Inviting_Node.get_id());
								Released = theReleaseMethod("grandkidsdone");
								if (Released)
									break;
							}

							else if (ev.get_data().equals(
									"NoGrandKids..ReqRelease")) {
								sim_trace(
										1,
										"Step 2.25 Done: "
												+ this.get_name()
												+ ","
												+ this.get_id()
												+ " evaluated the message and source and it is NoGrandKids notification from "
												+ Sim_system.get_entity(
														ev.get_src())
														.get_name()
												+ ", "
												+ Sim_system.get_entity(
														ev.get_src()).get_id());
								AH++;

								if (AH >= AdmittedHelpers.size() && (!Done)
										&& (!Released) && (!sent)) {
									System.out.println(this.get_name() + ","
											+ this.get_id() + " AH = " + AH
											+ " admittedHelpers= "
											+ AdmittedHelpers.size());
									sim_schedule(
											Inviting_Node.get_id(),
											this.ctrlMsgDelTimeThroughLinkToParent,
											901, "NoGrandKids..ReqRelease");
									sim_trace(
											1,
											"Step 2.26 Done: "
													+ this.get_name()
													+ ", "
													+ this.get_id()
													+ " sent NoGrandKids notification to "
													+ Inviting_Node.get_name()
													+ ", "
													+ Inviting_Node.get_id());
									Released = theReleaseMethod("NoGrandKids");
									if (Released)
										break;
								}
							} else if (ev.get_data().equals("Released")) {
								sim_trace(
										1,
										"Step 2.27 Done: "
												+ this.get_name()
												+ ","
												+ this.get_id()
												+ " evaluated the message and source and it is Released notification from "
												+ Sim_system.get_entity(
														ev.get_src())
														.get_name()
												+ ", "
												+ Sim_system.get_entity(
														ev.get_src()).get_id());
								Released = true;
								break;
							}
						}
						ev = new Sim_event();
						sim_get_next(ev);

					} // end while(ev.get_data()!=null)

				}// end if (!released)

				// Step 2.28: release all children
				int w = 0;
				while (w < AdmittedHelpers.size()) {
					sim_schedule(
							AdmittedHelpers.get(w).get_id(),
							AdmittedHelpers.get(w).ctrlMsgDelTimeThroughLinkToParent,
							231, "Released");
					sim_trace(1, "Step 2.28 Done: " + this.get_name() + ", "
							+ this.get_id() + " sent Released notification to "
							+ AdmittedHelpers.get(w).get_name() + ", "
							+ AdmittedHelpers.get(w).get_id());
					pr.oppnet.remove(AdmittedHelpers.get(w));
					// Step 1.29 remove admitted helper from list of oppnet

					sim_trace(1, "Step 2.29 Done: " + this.get_name() + ", "
							+ this.get_id() + " removed "
							+ AdmittedHelpers.get(w).get_name() + ", "
							+ AdmittedHelpers.get(w).get_id() + " from oppnet");

					w++;
				}

			} // end if (!Done)
		}// if (admitted)

		// ///////////////////////////////////////
		SimOutput so = new SimOutput();

		String filename;
		// ////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (this.AdmittedHelpers.size() > 0) {
			filename = "HelperIntegTime.txt";
			PrintWriter oppnetFileWriter = null;
			this.sumHelperItegTimePerInvNodePerIter = so
					.calculate_Sum(this.hlprIntegTime);
			so.outputFile1(this.hlprIntegTime.size(), true, filename,
					oppnetFileWriter,
					"Sum Helper Integ Time Per Node Per Iter",
					this.sumHelperItegTimePerInvNodePerIter, this.get_name(),
					this.get_id());

			// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			filename = "NumRequestedHelpers.txt";
			oppnetFileWriter = null;
			so.outputFile(true, filename, oppnetFileWriter,
					"Number of Requested Helpers Per Node Per Iter",
					this.numOfRequestedHelpersPerNode, this.get_name(),
					this.get_id());
			// ////////////////////////////////////////////////////////////////////////////////////////////////////////

			filename = "NumJoinedHelpers.txt";
			oppnetFileWriter = null;
			so.outputFile(true, filename, oppnetFileWriter,
					"Number of Joined Helpers Per Node Per Iter",
					this.numOfJoindHelpersPerNode, this.get_name(),
					this.get_id());
			// /////////////////////////////////////////////////////////////////////////////////////////////////////////
			filename = "NumRefusedHelpers.txt";
			oppnetFileWriter = null;
			so.outputFile(
					true,
					filename,
					oppnetFileWriter,
					"Number of Refused Helpers Per Node Per Iter",
					(this.numOfRequestedHelpersPerNode - this.numOfJoindHelpersPerNode),
					this.get_name(), this.get_id());
			// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

			filename = "NumAdmittedHelpers.txt";
			oppnetFileWriter = null;
			so.outputFile(true, filename, oppnetFileWriter,
					"Number of Admitted Helpers Per Node Per Iter",
					(this.AdmittedHelpers.size()), this.get_name(),
					this.get_id());
			// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
		}
		PrintWriter oppnetFileWriter = null;

		if (admitted) {
			filename = "HelperUnhurriedTask.txt";
			// File f = new File(filename);

			oppnetFileWriter = null;
			int value;
			if (this.performedUnhurried)
				value = 1;
			else
				value = 0;
			so.outputFile(true, filename, oppnetFileWriter,
					"Performed Unhurried Task", value, this.get_name(),
					this.get_id());
			// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

			filename = "HelperUrgentTask.txt";
			// File f2 = new File(filename);
			oppnetFileWriter = null;
			if (this.performedUrgent)
				value = 1;
			else
				value = 0;
			so.outputFile(true, filename, oppnetFileWriter,
					"Performed Urgent Task", value, this.get_name(),
					this.get_id());

			// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

			// ///////////////////////////////////////////////////////////////////////////
			this.sumTasksRunTimes = so.calculate_Sum(this.tasksRunTimes);

			filename = "TasksRuntimes.txt";
			// File file1 = new File(filename);
			oppnetFileWriter = null;
			so.outputFile1(this.tasksRunTimes.size(), true, filename,
					oppnetFileWriter, "Sum Task Runtimes Per Node Per Iter",
					this.sumTasksRunTimes, this.get_name(), this.get_id());
			// /////////////////////////////////////////////////////////////////////////////////////////////////
		}
	} // end body

	public boolean theReleaseMethod(String step) {
		boolean r = false;
		Sim_event ev1 = new Sim_event();
		sim_get_next(ev1);
		if (ev1.get_data() != null) {
			if (ev1.get_data().equals("Released")) {
				sim_trace(
						1,
						"Step "
								+ step
								+ "Done: "
								+ this.get_name()
								+ ","
								+ this.get_id()
								+ " evaluated the message and source and it is Released notification from "
								+ Sim_system.get_entity(ev1.get_src())
										.get_name() + ", "
								+ Sim_system.get_entity(ev1.get_src()).get_id());
				r = true;
			}
		}
		return r;
	}
/* This method sorts devices based on their type. This simulates the inviting node ability to
 * recognize the type of the device after scanning is done and sends requests to devices accordingly.
 * For example, when a tablet scans BT spectrum for BT devices and it finds a phone, a printer 
 * and a TV it chooses the phone "first" since it is most likely to do the goal task
 */

	@Override
	public int compareTo(Helper comparesto) {
		int compareage = ((Helper) comparesto).sortingOrder;

		return this.sortingOrder- compareage;

	}

}
