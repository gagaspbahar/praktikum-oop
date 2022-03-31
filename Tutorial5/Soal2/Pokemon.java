package Tutorial5.Soal2;

import java.io.*;

class Pokemon {
	protected String name;

	public Pokemon() {
		this.name = "NoName";
		System.out.println("ctor1 Pokemon");
	}

	public Pokemon(String name) {
		this.name = name;
		System.out.println("ctor2 Pokemon");
	}

    public void displayClass() {
		System.out.println("Super Class Pokemon");
	}

	public String getName() {
		return name;
	}
}