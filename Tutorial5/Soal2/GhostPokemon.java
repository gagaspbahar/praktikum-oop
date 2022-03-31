// package Tutorial5.Soal2;

import java.io.*;

// Buat kelas GhostPokemon yang merupakan turunan dari kelas Pokemon dan mengimplementasi interface ElementalType<String>

// Atribut tolong dilihat sendiri pada diagram kelas

// Buat constructor tanpa parameter, meng-assign "Ghost" ke atribut elementalName dan mencetak "ctor1 GhostPokemon" ke layar

// Buat constructor dengan parameter String name, meng-assign "Ghost" ke atribut elementalName dan mencetak "ctor2 GhostPokemon" ke layar

// Buat prosedur checkElement yang mencetak "[name] have [elementName] type" ke layar

// Override prosedur displayClass yang mencetak "Sub Class GhostPokemon"

// Realisasi prosedur displayAura, mencetak "There is ominous aura around"

// Realisasi prosedur specialSkill, mencetak "Special skill invisible"

// Realisasi setUniqueID dan getUniqueID

public class GhostPokemon extends Pokemon implements ElementalType<String> {
  private String id;
  private String elementalName;

  public GhostPokemon(){
    super();
    this.elementalName = "Ghost";
    System.out.println("ctor1 GhostPokemon");
  }

  public GhostPokemon(String name){
    super(name);
    this.elementalName = "Ghost";
    System.out.println("ctor2 GhostPokemon");
  }

  public void checkElement(){
    System.out.println(this.name + " have " + this.elementalName + " type");
  }

  public void displayClass(){
    System.out.println("Sub Class GhostPokemon");
  }

  public void displayAura(){
    System.out.println("There is ominous aura around");
  }

  public void specialSkill(){
    System.out.println("Special skill invisible");
  }

  public void setUniqueID(String id){
    this.id = id;
  }

  public String getUniqueID(){
    return this.id;
  }
}
