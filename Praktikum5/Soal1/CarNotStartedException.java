public class CarNotStartedException extends Exception {
  
  public CarNotStartedException() {

  }

  public String toString() {
    return "Cannot drive. Car is not started.";
  }
}
