import java.util.HashMap;
import java.util.ArrayList;
import java.util.Map;

public class GofudServer implements EventBroker {
  // maps a topic to a list of subscribers
  // feel free to change/add data structures
  private Map<String, ArrayList<Subscriber>> topics;

  public GofudServer() {
    this.topics = new HashMap<>();
  }

  // TODO: method when server/broker is sending an event through a topic
  public void sendEvent(String topic, Event event) {
    ArrayList<Subscriber> a = this.topics.get(topic);
    for (Subscriber s : a) {
      s.onEvent(event);
    }
    return;
  }
  
  // TODO: method when a subscriber wants to subscribe to a topic
  public void addSubscriber(String topic, Subscriber subscriber) {
      ArrayList<Subscriber> a = this.topics.get(topic);
      if (a == null) {
        a = new ArrayList<Subscriber>();
        a.add(subscriber);
        this.topics.put(topic, a);
      }
      else {
        a.add(subscriber);
      }
    return;
  }
}