// student data model
public class Student {
  private String name;
  private String nim;

  // constructor
  public Student(String name, String nim) {
    this.name = name;
    this.nim = nim;
  }

  // getters
  public String getName() {
    return name;
  }

  public String getNim() {
    return nim;
  }
}