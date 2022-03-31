package Tutorial5.Soal2;

import java.io.*;

public class PokemonAction<T extends Pokemon> {
	private T pokemon;

	public PokemonAction(T pokemonRef) {
		this.pokemon = pokemonRef;
	}

	public void attack() {
		System.out.println(this.pokemon.name + " " + "attack!");
	}

	public void defense() {
		System.out.println(this.pokemon.name + " " + "defense!");
	}

	public void useSkill() {
		System.out.println(this.pokemon.name + " " + "use skill!");
	}

	public void run() {
		System.out.println(this.pokemon.name + " " + "run from battle!");
	}

	public void displayPokemonClass() {
		this.pokemon.displayClass();
	}
}
