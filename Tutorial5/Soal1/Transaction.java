package Tutorial5.Soal1;

public class Transaction<T extends Number> {
  private char type;
  private T amount;

  public Transaction(char type, T amount){
      this.type = type;
      this.amount = amount;
  }

  public void setType(char type) {
    this.type = type;
  }

  public void setAmount(T amount) {
    this.amount = amount;
  }

  public char getType() {
    return this.type;
  }

  public T getAmount() {
    return this.amount;
  }
}