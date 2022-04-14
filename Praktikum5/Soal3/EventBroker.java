interface EventBroker {
  // sends event based on a topic
  public void sendEvent(String topic, Event event);

  // add subscriber to topic
  public void addSubscriber(String topic, Subscriber subscriber);
}