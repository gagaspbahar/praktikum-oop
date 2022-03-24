// Gagas Praharsa Bahar / 13520016

public class Crewmate {
  public String name;
  public boolean isDead;
  private int stabCount;
  static int id = 0;

  public Crewmate(){
    id += 1;
    this.name = "Crewmate " + id;
    this.isDead = false;
    this.stabCount = 0;
  }
  
  public Crewmate(String name){
    id += 1;
    this.name = name;
    this.isDead = false;
    this.stabCount = 0;
  }

  public void stab(Crewmate victim){
    if(this.isDead){
      System.out.println(this.name + " is dead");
    }
    else{
      // if(victim.isDead){
      //   System.out.println(victim.name + " is dead");
      // }
      // else{
      //   victim.isDead = true;
      //   this.stabCount += 1;
      //   System.out.println(this.name + " stabs " + victim.name);
      // }
      victim.isDead = true;
      this.stabCount += 1;
      System.out.println(this.name + " stabs " + victim.name);
    }
  }

  public String toString(){
    String ans;
    if(this.isDead){
      ans = this.name + " is dead";
    }
    else{
      if(this.stabCount > 0){
        ans = this.name + " is sus";
      }
      else{
        ans = this.name + " is cool";
      }
    }
    return ans;
  }

  public static void main(String[] args) {
    Crewmate a = new Crewmate("Alpha");
    Crewmate b = new Crewmate("Beta");
    b.stab(a);
    a.stab(b);
    System.out.println(b.toString());
  }
}
