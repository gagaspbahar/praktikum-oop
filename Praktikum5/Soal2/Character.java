public class Character {
  private String name;
  private int atk;
  private int hp;
  private int attackUp;
  private int healthUp;

  public Character(String name, int atk, int hp, int attackUp, int healthUp) {
    this.name = name;
    this.atk = atk;
    this.hp = hp;
    this.attackUp = attackUp;
    this.healthUp = healthUp;
  }

  public String getName() {
    return this.name;
  }

  public int getAttackValue() {
    return this.atk;
  }

  public int getHpValue() {
    return this.hp;
  }

  public int getAttackUpValue() {
    return this.attackUp;
  }

  public int getHealthUpValue() {
    return this.healthUp;
  }
}