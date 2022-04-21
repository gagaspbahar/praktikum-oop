public class OrchidMeanDatum {
  private int orchidSpeciesCode;
  private float petalLength;
  private float petalWidth;
  private float stemLength;

  public OrchidMeanDatum(int orchidSpeciesCode) {
    this.orchidSpeciesCode = orchidSpeciesCode;
    this.petalLength = -1f;
    this.petalWidth = -1f;
    this.stemLength = -1f;
  }

  public void setMean(float petalLength, float petalWidth, float stemLength) {
    this.petalLength = petalLength;
    this.petalWidth = petalWidth;
    this.stemLength = stemLength;
  }

  public float getPetalLength() {
    return petalLength;
  }

  public float getPetalWidth() {
    return petalWidth;
  }

  public float getStemLength() {
    return stemLength;
  }
}