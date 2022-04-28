import java.lang.reflect.Field;
import java.lang.reflect.Method;

public class LaptopTest {
  // Anda boleh menambahkan atribut yang diperlukan
  private String className;

  public LaptopTest(String className) {
    /**
     * Memeriksa apakah ada kelas dengan nama className.
     * Jika tidak, tuliskan "Tidak ada kelas dengan nama yang diberikan" (tanpa
     * petik) ke layar
     */
    try {
      Class.forName(className);
      this.className = className;
    } catch (ClassNotFoundException e) {
      System.out.println("Tidak ada kelas dengan nama yang diberikan");
    }
  }

  public boolean testMethods() {
    boolean ans = false;
    try {
      Class c = Class.forName(this.className);
      if (c.getDeclaredMethods().length == 1) {
        // Jika nama method bukan getRamSize, tuliskan "Nama method harus getRamSize"
        // (tanpa petik) ke layar
        // Jika tipe return bukan Integer, tuliskan "Tipe return method harus Integer"
        // (tanpa petik) ke layar
        try {
          Method m = c.getDeclaredMethod("getRamSize");
          if (m.getReturnType().equals(Integer.class)) {
            ans = true;
          } else {
            System.out.println("Tipe return method harus Integer");
          }
        } catch (NoSuchMethodException e) {
          System.out.println("Nama method harus getRamSize");
        }
      } else {
        // Menuliskan "Banyaknya method hanya boleh 1" (tanpa petik) ke layar
        System.out.println("Banyaknya method hanya boleh 1");
      }
    } catch (Exception e) {
      System.out.println("Tidak ada kelas dengan nama yang diberikan");
    }
    // Return true jika semua tes berhasil
    // Jika ada 1 yang salah, return false
    return ans;
  }

  public boolean testFields() {
    boolean ans = false;
    try {
      Class c = Class.forName(this.className);
      if (c.getDeclaredFields().length == 1) {
        // Jika nama field bukan serialNumber, tuliskan "Nama field harus serialNumber"
        // (tanpa petik) ke layar
        // Jika tipe return bukan String, tuliskan "Tipe field harus String" (tanpa
        // petik) ke layar
        try {
          Field f = c.getDeclaredField("serialNumber");
          if (f.getType().equals(String.class)) {
            ans = true;
          } else {
            System.out.println("Tipe field harus String");
          }
        } catch (NoSuchFieldException e) {
          System.out.println("Nama field harus serialNumber");
        }
      } else {
        // Menuliskan "Banyaknya field hanya boleh 1" (tanpa petik) ke layar
        System.out.println("Banyaknya field hanya boleh 1");
      }

    } catch (ClassNotFoundException e) {
      System.out.println("Tidak ada kelas dengan nama yang diberikan");
    }
    // Return true jika semua tes berhasil
    // Jika ada 1 yang salah, return false
    return ans;
  }
}