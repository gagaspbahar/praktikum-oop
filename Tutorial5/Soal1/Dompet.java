// package Tutorial5.Soal1;

import java.util.*;

public class Dompet<T extends Number> {
    private ArrayList<Transaction> transactions;


     public Dompet() {
        // Constructor tanpa parameter, transactions diinisialisasi dengan array list baru
        this.transactions = new ArrayList<Transaction>();
    }


    public Dompet(T initialBalance) {
        // Constructor dengan parameter T initialBalance, inisialisasi transactions dengan array list baru dan tambahkan transaksi tambah dengan value initial balance
        /* contoh transaksi tambah: new Transaction<T>('+', initialBalance) */
        this.transactions = new ArrayList<Transaction>();
        this.transactions.add(new Transaction('+', initialBalance));
    }

    public void addMoney(T money) {
        // Buat prosedur addMoney dengan parameter T money, tambahkan transaksi tambah dengan senilai money
        this.transactions.add(new Transaction<T>('+', money));
    }

    public boolean takeMoney(T money) {
        // Tambahkan transaksi kurang sebesar money (perlu ada pengecekan apakah balance cukup atau tidak)
        // false bila transaksi gagal, true bila berhasil
        if (this.getBalance() >= money.doubleValue()){
            this.transactions.add(new Transaction<T>('-', money));
            return true;
        }
        else{
            return false;
        }
    }

    public void setBalance(T balance) {
        // Mengganti transaksi agar bernilai sama dengan balance
        // Tips: inisialisasi ulang transactions, lalu tambahkan transaksi tambah sebanyak balance
        this.transactions = new ArrayList<Transaction>();
        this.transactions.add(new Transaction<T>('+', balance));
    }

    // Akses nilai Double dilakukan dengan .doubleValue()
    // Contoh: amount.doubleValue()

    public Double getBalance(){
        // Mencari balance dompet dari transaksi dengan cara menghitung total transaksi
        // Tips: gunakan looping untuk menghitung total transaksi
        Double total = 0.0;
        for (Transaction<T> t : this.transactions){
            if (t.getType() == '+'){
                total += t.getAmount().doubleValue();
            }
            else{
                total -= t.getAmount().doubleValue();
            }
        }
        return total;
    }

    public void printTransactions() {
        // Print seluruh transaksi yang ada pada array
        // Format: Transactions [indeks + 1]: [tipe transaksi] [amount]
        // Contoh: Transactions 3: + 500
        int i = 1;
        for (Transaction<T> t : this.transactions){
            System.out.println("Transactions " + i + ": " + t.getType() + " " + t.getAmount());
            i++;
        }

    }

    public Double getAverageTransaction() {
        // Mencari rata-rata transaksi (jika tidak ada transaksi, berikan hasil null)
        // Tips: gunakan looping untuk menghitung rata-rata transaksi
        // Tips: gunakan getBalance() untuk mendapatkan balance
        // Tips: jika tidak ada transaksi, berikan hasil null
        if (this.transactions.size() == 0){
            return null;
        }
        else{
            return this.getBalance() / this.transactions.size();
        }
    }

    public Double getMinimumTransaction() {
        // Mencari nilai minimum transaksi (jika tidak ada transaksi, berikan hasil null; hanya perlu membandingkan nilainya saja tanpa peduli type)
        // Tips: gunakan looping untuk menghitung nilai minimum transaksi
        // Tips: gunakan getBalance() untuk mendapatkan balance
        // Tips: jika tidak ada transaksi, berikan hasil null
        if (this.transactions.size() == 0){
            return null;
        }
        else{
            Double min = this.transactions.get(0).getAmount().doubleValue();
            for (Transaction<T> t : this.transactions){
                if (t.getAmount().doubleValue() < min){
                    min = t.getAmount().doubleValue();
                }
            }
            return min;
        }
    }

    public Double getMaximumTransaction() {
        // Mencari nilai maksimum transaksi (jika tidak ada transaksi, berikan hasil null; hanya perlu membandingkan nilainya saja tanpa peduli type)
        // Tips: gunakan looping untuk menghitung nilai maksimum transaksi
        // Tips: gunakan getBalance() untuk mendapatkan balance
        // Tips: jika tidak ada transaksi, berikan hasil null
        if (this.transactions.size() == 0){
            return null;
        }
        else{
            Double max = this.transactions.get(0).getAmount().doubleValue();
            for (Transaction<T> t : this.transactions){
                if (t.getAmount().doubleValue() > max){
                    max = t.getAmount().doubleValue();
                }
            }
            return max;
        }
    }
}
