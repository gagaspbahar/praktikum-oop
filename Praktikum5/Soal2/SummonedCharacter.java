import java.util.ArrayList;

public class SummonedCharacter implements ISummoned {
  private Character ch;
  private int level;
  private int exp;
  private ArrayList<Spell> activeSpells;
  
  public SummonedCharacter(Character c, int level, int exp){
    this.ch = c;
    this.level = level;
    this.exp = exp;
    this.activeSpells = new ArrayList<Spell>();
  }

  public int getLevel() {
    return this.level;
  }

  public int getExp() {
    return this.exp;
  }

  public void addSpell(Spell s) {
    this.activeSpells.add(s);
  }

  public ArrayList<Spell> getActiveSpells() {
    return this.activeSpells;
  }

  public void levelUp() {
    this.level++;
    this.exp = 0;
    this.ch = new Character(this.ch.getName(), this.ch.getAttackValue() + this.ch.getAttackUpValue(), this.ch.getHpValue() + this.ch.getHealthUpValue(), this.ch.getAttackUpValue(), this.ch.getHealthUpValue());
  }

  public void render() {
    System.out.println("Nama: " + this.ch.getName());
    System.out.println("Level: " + this.getLevel());
    System.out.println("Exp: " + this.getExp());
    System.out.println("Atk: " + this.ch.getAttackValue());
    System.out.println("Hp: " + this.ch.getHpValue());
    System.out.println("Memiliki " + this.activeSpells.size() + " spell aktif:");
    for (Spell s : this.activeSpells) {
      System.out.println("- " + s.getName());
    }
    System.out.println("");
  }
  
}
