public class Utility {

  public static <T> void swap(T[] a, int i, int j) {
    if (i > a.length || j > a.length) {
      // do nothing
    } else if (i < 0 || j < 0) {
      // do nothing
    } else {
      T tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }

  public static <T> T[] repeat(T[] a, int n) {
    if (n < 0) {
      // do nothing
    } else if (n == 0) {
      return a;
    } else {
      T[] b = (T[]) new Object[a.length * n];
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < a.length; j++) {
          b[i * a.length + j] = a[j];
        }
      }
      return b;
    }
    return null;
  }

  public static <T> String join(T[] a) {
    String s = "";
    if (a == null) {
      // do nothing
    } else if (a.length == 0) {
      return s;
    } else {
      for (int i = 0; i < a.length; i++) {
        s += String.valueOf(a[i]);
        if (i < a.length - 1) {
          s += ",";
        }
      }
      return s;
    }
    return null;
  }

  public static <T extends Number> double sum(T[] a) {
    double sum = 0;
    for (int i = 0; i < a.length; i++) {
      sum += a[i].doubleValue();
    }
    return sum;
  }
}
