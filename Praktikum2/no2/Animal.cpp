#include "Animal.hpp"

#include <iostream>

using namespace std;

Animal::Animal() {
  this->numOfLegs = 0;
  this->isVegetarian = 0;

  cout << "ctor animal " << numOfLegs << " " << isVegetarian << endl;
}

Animal::Animal(int numOfLegs, bool isVegetarian) {
  this->numOfLegs = numOfLegs;
  this->isVegetarian = isVegetarian;

  cout << "ctor animal " << numOfLegs << " " << isVegetarian << endl;
}

Animal::Animal(const Animal& animal) {
  this->numOfLegs = animal.numOfLegs;
  this->isVegetarian = animal.isVegetarian;

  cout << "cctor animal " << numOfLegs << " " << isVegetarian << endl;
}

Animal::~Animal() {
  cout << "dtor animal " << numOfLegs << " " << isVegetarian << endl;
}

Animal& Animal::operator=(const Animal& animal) {
  this->numOfLegs = animal.numOfLegs;
  this->isVegetarian = animal.isVegetarian;
  cout << "assign animal " << numOfLegs << " " << isVegetarian << endl;

  return *this;
}

void Animal::feed() {
  cout << "someone is feeding this animal " << numOfLegs << " " << isVegetarian
       << endl;
}

void Animal::breed() {
  cout << "someone is breeding this animal " << numOfLegs << " " << isVegetarian
       << endl;
}

void Animal::walk() {
  cout << "someone is walking this animal " << numOfLegs << " " << isVegetarian
       << endl;
}