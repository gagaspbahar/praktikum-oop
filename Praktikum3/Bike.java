// Gagas Praharsa Bahar / 13520016
// package Praktikum3;

public class Bike extends NonMotorizedVehicle implements Rideable {
  public Bike(){
    this.name = "Bike";
  }

  public Bike(String name){
    this.name = name;
  }

  public String getName(){
    return this.name;
  }

  public void ride(){
    System.out.println("Riding a " + this.name);
  }
}
