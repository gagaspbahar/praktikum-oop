public class GofudRestaurant implements Publisher {
	private EventBroker channel;
	private String name;
	private int position;

	public GofudRestaurant(EventBroker channel, String name, int position) {
		this.channel = channel;
		this.name = name;
		this.position = position;
	}
	
	// what to do on restaurant sending event
	public void publish(String topic, Event event) {
		this.channel.sendEvent(topic, event);
	}

	// get restaurant name
	public String getName() {
		return this.name;
	}

	// get restaurant location
	public int getLocation() {
		return this.position;
	}
	
}