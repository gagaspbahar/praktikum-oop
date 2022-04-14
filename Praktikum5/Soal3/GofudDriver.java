public class GofudDriver implements Subscriber {
	private static int DRIVER_MAX_DISTANCE = 3;

	private String name;
	private int position;

	public GofudDriver(String name, int position) {
		this.name = name;
		this.position = position;
	}
	
	// what to do on driver receiving event
	public void onEvent(Event event) {
		if(event instanceof OrderEvent) {
			OrderEvent e = (OrderEvent) event;
			if(distance(e.getRestaurant()) <= DRIVER_MAX_DISTANCE) {
				System.out.print("[" + this.name + "] ");
				System.out.println(e.toString());
			}
		}
		// ... and so on and so forth for different events (if exists)
	}

	// calculates the distance of the driver to the restaurant
	public int distance(GofudRestaurant resto) {
		return Math.abs(resto.getLocation() - this.position);
	}
	
}