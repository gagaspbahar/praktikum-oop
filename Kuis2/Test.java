import java.util.ArrayDeque;
import java.util.ArrayList;

public class History {
  private String namaResto;
  private String[] listMakanan;
  private int totalHarga;
  
  public History(){
    this.namaResto = "";
    this.listMakanan = new String[5];
    this.totalHarga = 0;
  }

  public void getItemByResto(String namaResto){
    // Mencari item berdasarkan resto
  }

  public int getTotalHarga(){
    return this.totalHarga;
  }
}

public class DaftarHistory {
  private ArrayDeque<History> daftarHistory;

  public DaftarHistory(){
    this.daftarHistory = new ArrayDeque<History>();
  }

  public void addHistory(History history){
    this.daftarHistory.push(history);
  }

  public void removeHistory(History history){
    this.daftarHistory.remove(history);
  }

  public void printHistory(){
    for(History history : this.daftarHistory){
      history.printHistory();
    }
  }
}
