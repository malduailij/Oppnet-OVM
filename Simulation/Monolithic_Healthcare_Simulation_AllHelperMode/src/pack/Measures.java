package pack;
import java.util.ArrayList;


public class Measures {
	
	//Time measures
	public ArrayList Test= new ArrayList();

	public ArrayList avgHlprIntegTimePerIterationAllInvNodes= new ArrayList();
	public double avgHlprIntegTimeAll;

	public double avgTaskCompleteTimePerIteration;
	public double avgTaskCompleteTimeAll;
	
	public double avgOppnetTimeToSucceedPerIteration;
	public double avgOppnetTimeToSucceedAll;

	//Resource Usage Measures
	public double avgRequestedHelpersPerIter;
	public double avgRequestedHelpersAll;
	
	public double avgJoinedHelpersPerIter;
	public double avgJoinedHelpersAll;
	
	public double avgRefusedHelpersPerIter;
	public double avgRefusedHelpersAll;
	
	public double avgAdmittedHelpersPerIter;
	public double avgAdmittedHelpersAll;
	
	public double avgHelpersUrgentTaskPerIter;
	public double avgHelpersUrgentTaskAll;
	
	public double avgHelpersUnhurriedTaskPerIter;
	public double avgHelpersUnhurriedTaskAll;
		
	//Success Rate Measures
	public double oppnetSuccessRate;
	
	/////////////////////////////////////////////////////////////////////
	//public ArrayList HlprIntegTimePerIterationAllInvNode = new ArrayList();

	//public ArrayList TaskCompleteTime = new ArrayList();

public double calculate_Avg(ArrayList measureValues){
	double sum= 0;
	double avg = 0;
	for (int i=0; i<measureValues.size(); i++)
		sum= sum + (Double) measureValues.get(i);
	avg = sum / measureValues.size();
	
	return avg;
}
	

}
