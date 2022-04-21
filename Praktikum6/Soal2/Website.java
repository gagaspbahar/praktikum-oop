// simulating site for data source
public class Website {
  private static final String SITE_NAME = "nic.itb.ac.id";

  public Website() {}

  // for demo only
  public String getSiteName() {
    return SITE_NAME;
  }

  // gets student data by nim
  public Student getStudentDataByNIM(String nim) {
    try {
      // fetching delay from website, minimized for this problem
      int delay = (int)(5 + Math.random()*2);
      Thread.sleep(delay);
    } catch (Exception e) {}

    return new Student("John Doe " + nim, nim);
  }
}