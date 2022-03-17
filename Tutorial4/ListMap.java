public class ListMap implements Map {

    private ListMapEntry first;

    public ListMap() {
        this.first = null;
    }

    public boolean isEmpty() {
        return this.first == null;
    }

    public void set(String key, String value) {
        if (this.isEmpty()) {
            this.first = new ListMapEntry(key, value);
        } else {
            ListMapEntry p = this.first;
            boolean found = false;
            while (p != null && !found) {
                if (p.getKey().equals(key)) {
                    found = true;
                } else {
                    p = p.getNext();
                }
            }
            if (found) {
                p.setValue(value);
            } else {
                ListMapEntry node = new ListMapEntry(key, value, this.first);
                this.first = node;
            }
        }
    }

    public String get(String key) {
        String ans = null;
        ListMapEntry p = this.first;
        boolean found = false;
        while (p != null && !found) {
            if (p.getKey().equals(key)) {
                found = true;
            } else {
                p = p.getNext();
            }
        }
        if (found) {
            ans = p.getValue();
        }
        return ans;
    }

    public int size(){
        ListMapEntry p = this.first;
        int count = 0;
        while(p != null){
            count++;
            p = p.getNext();
        }

        return count;
    }
}