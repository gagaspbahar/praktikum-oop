public class Bus extends KendaraanRental {
  protected int kapasitasKendaraan;

  public Bus(){
    super();
    this.kapasitasKendaraan = 0;
  }
  public Bus(int nomorUnikKendaraan, String merk, int tahun, int lamaSewa, int kapasitasKendaraan){
    super(nomorUnikKendaraan, merk, tahun, lamaSewa);
    this.kapasitasKendaraan = kapasitasKendaraan;
  }

  public int getKapasitasKendaraan(){
    return this.kapasitasKendaraan;
  }

  public void setKapasitasKendaraan(int kapasitasKendaraan){
    this.kapasitasKendaraan = kapasitasKendaraan;
  }

  public void printInfo(){
    System.out.println("Nomor Unik Kendaraan: " + this.getNomorUnikKendaraan());
    System.out.println("Merk: " + this.getMerk());
    System.out.println("Tahun: " + this.getTahun());
    System.out.println("Lama Sewa: " + this.getLamaSewa());
    System.out.println("Kapasitas Kendaraan: " + this.getKapasitasKendaraan());
  }

  public int biayaSewa(int lamaSewa){
    int biayaSewa = 0;
    if(lamaSewa <= 7){
      biayaSewa = lamaSewa * 100000;
    } else {
      biayaSewa = lamaSewa * 80000;
    }
    return biayaSewa;
  }
}
