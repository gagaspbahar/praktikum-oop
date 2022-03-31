package Latihan;

abstract class Kendaraan {
  protected int nomor;
  protected int tahun;
  protected String merk;

  public Kendaraan() {
    this.nomor = 0;
    this.tahun = 0;
    this.merk = "";
  }

  public Kendaraan(int nomor, int tahun, String merk) {
    this.nomor = nomor;
    this.tahun = tahun;
    this.merk = merk;
  }

  public Kendaraan(Kendaraan k) {
    this.nomor = k.nomor;
    this.tahun = k.tahun;
    this.merk = k.merk;
  }

  public void printInfo() {
    System.out.println("Nomor Kendaraan: " + nomor);
    System.out.println("Tahun Kendaraan: " + tahun);
    System.out.println("Merk Kendaraan: " + merk);
  }

  abstract int biayaSewa(int lamaSewa);
}

public class Bus extends Kendaraan {
  private int kapasitas;

  public Bus() {
    super();
    this.kapasitas = 0;
  }

  public Bus(int nomor, int tahun, String merk, int kapasitas) {
    super(nomor, tahun, merk);
    this.kapasitas = kapasitas;
  }

  public Bus(Bus b) {
    super(b);
    this.kapasitas = b.kapasitas;
  }

  public void printInfo() {
    super.printInfo();
    System.out.println("Kapasitas Bus: " + kapasitas);
    System.out.println("Kategori: Bus");
  }

  public int biayaSewa(int lamaSewa) {
    return lamaSewa * 10000;
  }
}

public class MiniBus extends Kendaraan {
  // private int kapasitas;

  public MiniBus() {
    super();
  }

  public MiniBus(int nomor, int tahun, String merk, int kapasitas) {
    super(nomor, tahun, merk);
  }

  public MiniBus(MiniBus m) {
    super(m);
  }

  public void printInfo() {
    super.printInfo();
    System.out.println("Kategori: Mini Bus");
  }

  public int biayaSewa(int lamaSewa) {
    if (lamaSewa <= 5) {
      return 5000000;
    } else {
      return 5000000 + 500000 * (lamaSewa - 5);
    }
  }
}

public class Mobil extends Kendaraan {
  private String supir;

  public Mobil() {
    super();
    this.supir = "";
  }

  public Mobil(int nomor, int tahun, String merk, String supir) {
    super(nomor, tahun, merk);
    this.supir = supir;
  }

  public Mobil(Mobil m) {
    super(m);
    this.supir = m.supir;
  }

  public void printInfo() {
    super.printInfo();
    System.out.println("Nama supir: " + this.supir);
    System.out.println("Kategori: Mobil");
  }

  public int biayaSewa(int lamaSewa) {
    return lamaSewa * 500000;
  }
}

public class KoleksiKendaraan {
  private int size;
  private int neff;
  private Kendaraan buffer[];

  public KoleksiKendaraan() {
    this.size = 10;
    this.neff = 0;
    this.buffer = new Kendaraan[this.size];
  }

  public KoleksiKendaraan(int size) {
    this.size = size;
    this.neff = 0;
    this.buffer = new Kendaraan[this.size];
  }

  public KoleksiKendaraan(KoleksiKendaraan kk){
    this.size = kk.size;
    this.neff = kk.neff;
    this.buffer = new Kendaraan[this.size];
    for (int i = 0; i < this.neff; i++) {
      this.buffer[i] = kk.buffer[i];
    }
  }

  public void printAll(){
    for (int i = 0; i < this.neff; i++) {
      this.buffer[i].printInfo();
    }
  }

  public void addKendaraan(Kendaraan k){
    if (this.neff == this.size) {
      Kendaraan temp[] = new Kendaraan[this.size * 2];
      for (int i = 0; i < this.neff; i++) {
        temp[i] = this.buffer[i];
      }
      this.buffer = temp;
      this.size *= 2;
    }
    this.buffer[this.neff] = k;
    this.neff++;
  }

  public void addKoleksiKendaraan(KoleksiKendaraan kk){
    if (this.neff + kk.neff > this.size) {
      Kendaraan temp[] = new Kendaraan[this.size * 2];
      for (int i = 0; i < this.neff; i++) {
        temp[i] = this.buffer[i];
      }
      this.buffer = temp;
      this.size *= 2;
    }
    for (int i = 0; i < kk.neff; i++) {
      this.buffer[this.neff] = kk.buffer[i];
      this.neff++;
    }
  }
}