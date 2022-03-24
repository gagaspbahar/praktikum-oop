// Gagas Praharsa Bahar / 13520016
// package Praktikum3;

public class Human extends Animal {

  public Human() {
    super(2);
  }

  public void eat(String food) {
    if (!food.equals("teman")){
      this.hungry = false;
    }
  }

  public void run() {
    System.out.println("Human is running");
  }

}
