// event made when a food order is made
class OrderEvent implements Event {
  private GofudRestaurant restaurant;
  private String food;

  public OrderEvent(GofudRestaurant restaurant, String food) {
    this.restaurant = restaurant;
    this.food = food;
  }

  public GofudRestaurant getRestaurant() {
    return this.restaurant;
  }

  public String toString() {
    return "new order: " + this.food;
  }
}