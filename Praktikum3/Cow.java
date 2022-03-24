// Gagas Praharsa Bahar / 13520016
// package Praktikum3;

public class Cow extends Animal {
  public Cow(){
    super(4);
  }

  public void eat(String food) {
    if(food.equals("grass")){
      this.hungry = false;
    }
  }

  public void run(){
    super.run();
    System.out.println("Cow is running");
  }
}
