import java.lang.reflect.Field;
import java.util.Map;
import java.util.TreeMap;
import java.util.stream.Collectors;

class JSONWriter {
  private Object o;

  public JSONWriter(Object o) {
    this.o = o;
  }

  public String mapToJSON(Map<String, String> jsonFieldMap) {
    String jsonString = jsonFieldMap
        .entrySet()
        .stream()
        .map(entry -> "\"" + entry.getKey() + "\":\"" + entry.getValue() + "\"")
        .collect(Collectors.joining(","));

    return "{" + jsonString + "}";
  }

  public String toString() {
    Map<String, String> jsonFieldMap = new TreeMap<>();
    // TODO:
    // Untuk setiap field di kelas o, periksa apakah memiliki anotasi dengan
    // field.isAnnotationPresent(JSONField.class).
    // Jika ada, tambahkan entry ke jsonFieldMap dengan <key,value> =
    // key = nama field
    // value = nilai dari field
    // ...lengkapi di sini
    Field[] fields = this.o.getClass().getDeclaredFields();
    for (Field f : fields) {
      if (f.isAnnotationPresent(JSONField.class)) {
        try {
          f.setAccessible(true);
          jsonFieldMap.put(f.getName(), (String) f.get(this.o));
        } catch (Exception e) {

        }
      }
    }

    return mapToJSON(jsonFieldMap);
  }
}