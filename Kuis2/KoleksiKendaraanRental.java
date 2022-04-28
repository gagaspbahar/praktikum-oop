public class KoleksiKendaraanRental<T extends KendaraanRental> {
  private int kapasitasRentalMaksimum;
  private int kapasitasRentalSaatIni;

  private T[] kendaraanRental;

  public KoleksiKendaraanRental(){
    this.kapasitasRentalMaksimum = 5;
    this.kapasitasRentalSaatIni = 0;
    this.kendaraanRental = (T[]) new KendaraanRental[this.kapasitasRentalMaksimum];
  }

  public KoleksiKendaraanRental(int kapasitasRentalMaksimum){
    this.kapasitasRentalMaksimum = kapasitasRentalMaksimum;
    this.kapasitasRentalSaatIni = 0;
    this.kendaraanRental = (T[]) new KendaraanRental[kapasitasRentalMaksimum];
  }

  public int getKapasitasRentalMaksimum(){
    return this.kapasitasRentalMaksimum;
  }

  public int getKapasitasRentalSaatIni(){
    return this.kapasitasRentalSaatIni;
  }

  public void tambahKendaraan(T kendaraan){
    if(this.kapasitasRentalSaatIni < this.kapasitasRentalMaksimum){
      this.kendaraanRental[this.kapasitasRentalSaatIni] = kendaraan;
      this.kapasitasRentalSaatIni++;
    } else {
      System.out.println("Kapasitas rental sudah penuh!");
    }
  }

  public void printAll(){
    int sum = 0;
    for(int i = 0; i < this.kapasitasRentalSaatIni; i++){
      this.kendaraanRental[i].printInfo();
      sum += this.kendaraanRental[i].biayaSewa(this.kendaraanRental[i].getLamaSewa());
    }
    System.out.println("Total biaya sewa: " + sum);
  }
}
