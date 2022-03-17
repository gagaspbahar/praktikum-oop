// Map.java

public interface Map {
    /**
     * Menambahkan (key, value) ke dalam map
     * Melakukan overwrite jika sudah terdapat elemen dengan key yang sama.
     */
    public void set(String key, String value);

    /**
     * Mengembalikan value yang tersimpan untuk key tertentu pada map
     * Mengembalikan NULL apabila map tidak mengandung key masukan.
     */
    public String get(String key);

    /**
     * Menghitung jumlah elemen yang ada pada map
     */
    public int size();
}