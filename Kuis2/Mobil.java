public class Mobil extends KendaraanRental {
  private int rateSupir; // 1 < x < 5

  public Mobil(){
    super();
    this.rateSupir = 0;
  }

  public Mobil(int nomorUnikKendaraan, String merk, int tahun, int lamaSewa, int rateSupir){
    super(nomorUnikKendaraan, merk, tahun, lamaSewa);
    this.rateSupir = rateSupir;
  }

  public int getRateSupir(){
    return this.rateSupir;
  }

  public void setRateSupir(int rateSupir){
    this.rateSupir = rateSupir;
  }

  @Override
  public void printInfo(){
    System.out.println("Nomor Unik Kendaraan: " + this.getNomorUnikKendaraan());
    System.out.println("Merk: " + this.getMerk());
    System.out.println("Tahun: " + this.getTahun());
    System.out.println("Lama Sewa: " + this.getLamaSewa());
    System.out.println("Rate Supir: " + this.getRateSupir());
  }

  @Override
  public int biayaSewa(int lamaSewa){
    int biayaSewa = 0;
    if(lamaSewa <= 7){
      biayaSewa = lamaSewa * 100000;
    } else {
      biayaSewa = lamaSewa * 80000;
    }
    biayaSewa = biayaSewa + (biayaSewa * this.getRateSupir());
    return biayaSewa;
  }
}
