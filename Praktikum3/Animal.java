// Gagas Praharsa Bahar / 13520016
// package Praktikum3;

public class Animal {
  protected int legs;
  protected boolean hungry;

  public Animal(int legs) {
    this.legs = legs;
    this.hungry = true;
  }

  public void eat(String food) {
    // doing nothing
  }

  public void run() {
    System.out.println("Animal is running");
  }
}
