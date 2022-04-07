import java.util.*;

public class Worker {
	public static int run(List<Integer> durations, int machineCount) {
		// implementation here
    int totalDuration = 0;
    int min;
    int minIdx;
    int[] machines = new int[machineCount];
    
    for(int i = 0; i < durations.size(); i++){
      min = 10000001;
      minIdx = -1;
      for(int j = 0; j < machineCount; j++){
        if(min > machines[j]){
          min = machines[j];
          minIdx = j;
        }
      }
      machines[minIdx] += durations.get(i);
      totalDuration = machines[minIdx] > totalDuration ? machines[minIdx] : totalDuration;
    }
    
		return totalDuration;
	}

  public static void main(String args[]){
    List<Integer> durations = new ArrayList<Integer>();
    durations.add(5);
    durations.add(3);
    durations.add(2);
    durations.add(4);
    durations.add(1);
    int machineCount = 3;
    int totalDuration = run(durations, machineCount);
    System.out.println(totalDuration);
  }
}