// package Tutorial5.Soal2;

public class Main {
  public static void main(String args[]){
    System.out.println("--- Section 1 ---");
    GhostPokemon g1 = new GhostPokemon();
    FightingPokemon f1 = new FightingPokemon();
    NormalPokemon n1 = new NormalPokemon();
    Pokemon p1 = new Pokemon();
    
    System.out.println(g1.getName());
    System.out.println(f1.getName());
    System.out.println(n1.getName());
    System.out.println(p1.getName());

    GhostPokemon g2 = new GhostPokemon("Gastly");
    FightingPokemon f2 = new FightingPokemon("Machop");
    NormalPokemon n2 = new NormalPokemon("Rattata");
    Pokemon p2 = new Pokemon("Big Boss");

    System.out.println(g2.getName());
    System.out.println(f2.getName());
    System.out.println(n2.getName());
    System.out.println(p2.getName());

    g2.displayClass();
    f2.displayClass();
    n2.displayClass();
    p2.displayClass();

    g2.setUniqueID("G1");
    System.out.println(g2.getUniqueID());
    f2.setUniqueID(12);
    System.out.println(f2.getUniqueID());

    System.out.println("--- Section 2 ---");
    g2.checkElement();
    f2.checkElement();
    n2.checkElement();
    g2.specialSkill();
    f2.displayAura();
    g2.displayAura();
    f2.specialSkill();

    System.out.println("--- Section 3 ---");
    PokemonAction<GhostPokemon> gpa = new PokemonAction(g2);
    PokemonAction<NormalPokemon> npa = new PokemonAction(n2);

    gpa.displayPokemonClass();
    npa.displayPokemonClass();

    System.out.println(g2.getName() + " vs " + n2.getName());
    for(int i = 0; i < 7; i++){
      gpa.attack();
      npa.defense();
    }
    for(int i = 0; i < 3; i++){
      npa.attack();
      gpa.defense();
    }

    npa.useSkill();
    gpa.useSkill();
    npa.run();


    System.out.println("--- Section 4 ---");
    System.out.println("New Battle Found");
    PokemonAction<FightingPokemon> fpa = new PokemonAction(f2);
    PokemonAction<Pokemon> ppa = new PokemonAction(p2);
    fpa.displayPokemonClass();
    ppa.displayPokemonClass();
    System.out.println(p2.getName() + " vs " + f2.getName());

    for(int i = 0; i < 4; i++){
      fpa.attack();
      ppa.defense();
    }
    for(int i = 0; i < 8; i++){
      ppa.attack();
      fpa.defense();
    }

    fpa.useSkill();
    ppa.useSkill();
    fpa.run();

    System.out.println("All Battle Finished");
  }
}
