public abstract class KendaraanRental {
  protected int nomorUnikKendaraan;
  protected String merk;
  protected int tahun;
  protected int lamaSewa;

  abstract void printInfo();

  abstract int biayaSewa(int lamaSewa);

  public KendaraanRental(){
    this.nomorUnikKendaraan = 0;
    this.merk = "";
    this.tahun = 0;
    this.lamaSewa = 0;
  }
  public KendaraanRental(int nomorUnikKendaraan, String merk, int tahun, int lamaSewa){
    this.nomorUnikKendaraan = nomorUnikKendaraan;
    this.merk = merk;
    this.tahun = tahun;
    this.lamaSewa = lamaSewa;
  }

  public int getNomorUnikKendaraan(){
    return this.nomorUnikKendaraan;
  }

  public String getMerk(){
    return this.merk;
  }

  public int getTahun(){
    return this.tahun;
  }

  public int getLamaSewa(){
    return this.lamaSewa;
  }

  public void setNomorUnikKendaraan(int nomorUnikKendaraan){
    this.nomorUnikKendaraan = nomorUnikKendaraan;
  }

  public void setMerk(String merk){
    this.merk = merk;
  }

  public void setTahun(int tahun){
    this.tahun = tahun;
  }

  public void setLamaSewa(int lamaSewa){
    this.lamaSewa = lamaSewa;
  }
  
}
