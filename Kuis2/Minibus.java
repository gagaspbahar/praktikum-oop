public class Minibus extends Bus implements Diskon {
  public Minibus(){
    super();
  }

  public Minibus(int nomorUnikKendaraan, String merk, int tahun, int lamaSewa, int kapasitasKendaraan){
    super(nomorUnikKendaraan, merk, tahun, lamaSewa, kapasitasKendaraan);
  }

  public int getDiskon(){
    return this.getLamaSewa() * 5;
  }

  public void printInfo(){
    System.out.println("Nomor Unik Kendaraan: " + this.getNomorUnikKendaraan());
    System.out.println("Merk: " + this.getMerk());
    System.out.println("Tahun: " + this.getTahun());
    System.out.println("Lama Sewa: " + this.getLamaSewa());
    System.out.println("Kapasitas Kendaraan: " + this.getKapasitasKendaraan());
    System.out.println("Diskon: " + this.getDiskon());
  }

  public int biayaSewa(int lamaSewa){
    int biayaSewa = 0;
    if(lamaSewa <= 7){
      biayaSewa = lamaSewa * 100000;
    } else {
      biayaSewa = lamaSewa * 80000;
    }
    biayaSewa = biayaSewa - (biayaSewa * this.getDiskon() / 100);
    return biayaSewa;
  }
}
