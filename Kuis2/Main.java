public class Main {
  public static void main(String[] args) {
    KoleksiKendaraanRental<Minibus> koleksiMinibus = new KoleksiKendaraanRental<Minibus>();
    Minibus minibus1 = new Minibus(1, "Mercedes", 2017, 7, 50);
    Minibus minibus2 = new Minibus(2, "Mercedes", 2017, 7, 50);
    Minibus minibus3 = new Minibus(3, "Mercedes", 2017, 7, 50);
    koleksiMinibus.tambahKendaraan(minibus1);
    koleksiMinibus.tambahKendaraan(minibus2);
    koleksiMinibus.tambahKendaraan(minibus3);

    KoleksiKendaraanRental<Mobil> koleksiMobil = new KoleksiKendaraanRental<Mobil>();
    Mobil mobil1 = new Mobil(1, "Mercedes", 2017, 7, 1);
    Mobil mobil2 = new Mobil(2, "Mercedes", 2017, 7, 2);
    Mobil mobil3 = new Mobil(3, "Mercedes", 2017, 7, 3);
    koleksiMobil.tambahKendaraan(mobil1);
    koleksiMobil.tambahKendaraan(mobil2);
    koleksiMobil.tambahKendaraan(mobil3);

    KoleksiKendaraanRental<Bus> koleksiBusMinibus = new KoleksiKendaraanRental<Bus>();
    Bus bus1 = new Bus(1, "Mercedes", 2017, 7, 50);
    Minibus minibus4 = new Minibus(2, "Mercedes", 2017, 7, 50);
    koleksiBusMinibus.tambahKendaraan(bus1);
    koleksiBusMinibus.tambahKendaraan(minibus4);

    System.out.println("Koleksi Mobil");
    koleksiMobil.printAll();

    System.out.println("Koleksi Minibus");
    koleksiMinibus.printAll();

    System.out.println("Koleksi Bus Minibus");
    koleksiBusMinibus.printAll();

  }
}
