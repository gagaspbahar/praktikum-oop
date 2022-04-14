public class NotEnoughFuelException extends Exception {
  public int requiredFuel;

  public NotEnoughFuelException(int requiredFuel) {
    super();
    this.requiredFuel = requiredFuel;
  }

  public String toString() {
    return "Not enough fuel. Need " + this.requiredFuel + " more fuel to drive.";
  }

}