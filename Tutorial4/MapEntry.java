// MapEntry.java

public class MapEntry {
    private final String key;
    private String value;

    public MapEntry (String key, String value) {
        this.key = key; this.value = value;
    }

    public String getKey() { return key; }
    public String getValue() { return value; }
    public void setValue(String x) { value = x; }
}