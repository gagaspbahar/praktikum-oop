import java.lang.reflect.Field;
import java.util.HashMap;

public class Injector {
  private HashMap<Class, Object> map = new HashMap<>();

  // Menerima sebuah definisi dependencies
  // yang berupa sebuah instansiasi kelas
  // Catatan: Injector bisa menampung lebih dari 1 dependency,
  // jadi injector bisa menginject banyak sekaligus.
  // Jika ada 2 objek dengan kelas yang sama,
  // inject dengan object terakhir yang di add ke daftar dependency
  void addDependencies(Object object) {
    this.map.put(object.getClass(), object);
  }

  /*
   * Menginjeksi dependencies yang telah dibuat ke dalam objek
   * Injeksi dilakukan dengan mengacu pada dependencies yang ditambah
   * pada method addDependencies.
   * 
   * Setiap field di object yang diinject, bila kelasnya
   * sudah ditambahkan sebagai dependency, maka akan diset sebagai
   * object yang sudah di add didependency.
   */
  void inject(Object object) throws Exception {
    Field[] fields = object.getClass().getDeclaredFields();
    for (Field f : fields) {
      try {
        f.setAccessible(true);
        if (this.map.containsKey(f.getType())) {
          Class<?> ft = f.getType();
          f.set(object, ft.cast(this.map.get(ft)));
        }
      } catch (Exception e) {
        //
      }
    }
  }
}