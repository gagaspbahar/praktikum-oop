import java.lang.Comparable;

public class Mahasiswa implements Comparable<Mahasiswa> {
  private float ipk;
  private int kodeJurusan;
  private int angkatan;

  public Mahasiswa(int kodeJurusan, int angkatan, float ipk) {
    this.ipk = ipk;
    this.kodeJurusan = kodeJurusan;
    this.angkatan = angkatan;
  }

  public int getKodeJurusan(){
      return this.kodeJurusan;
  }

  public int getAngkatan(){
      return this.angkatan;
  }

  public float getIpk(){
      return this.ipk;
  }

  public int compareTo(Mahasiswa m) {
    // compareTo mengembalikan:
    // 0 bila this sama dengan m
    // 1 bila this lebih dari m
    // -1 bila this kurang dari m
    int ans = 1;
    if(this.kodeJurusan < m.kodeJurusan){
        ans = -1;
    }
    else if(this.kodeJurusan == m.kodeJurusan){
        if(this.angkatan > m.angkatan){
            ans = -1;
        } else if(this.angkatan == m.angkatan){
            if(this.ipk > m.ipk){
                ans = -1;
            }
            else if(this.ipk == m.ipk){
                ans = 0;
            }
        }
    }
    return ans;
  }
}
