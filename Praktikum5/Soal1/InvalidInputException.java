public class InvalidInputException extends Exception {
  public int input;

  public InvalidInputException(int number) {
    super();
    this.input = number;
  }

  public String toString() {
    return this.input + " is invalid input.";
  }
}