import java.util.*;

class Assistant {
  private int salary;
  private List recommendations;

  Assistant(int salary) {
    this.salary = salary;
    recommendations = new ArrayList();
  }

  private void addPersonToRecommendations(String name) {
    this.recommendations.add(name);
  }
}