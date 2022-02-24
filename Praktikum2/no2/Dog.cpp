#include "Dog.hpp"

#include <iostream>

using namespace std;

Dog::Dog(bool isVegetarian) : Animal(4, isVegetarian) {
  cout << "ctor dog " << numOfLegs << " " << isVegetarian << endl;
}

Dog::Dog(const Dog& dog) : Animal::Animal(dog) {
  this->numOfLegs = dog.numOfLegs;
  this->isVegetarian = dog.isVegetarian;

  cout << "cctor dog " << numOfLegs << " " << isVegetarian << endl;
}

Dog::~Dog() {
  cout << "dtor dog " << numOfLegs << " " << isVegetarian << endl;
}

Dog& Dog::operator=(const Dog& dog) {
  this->numOfLegs = dog.numOfLegs;
  this->isVegetarian = dog.isVegetarian;
  cout << "assign dog " << numOfLegs << " " << isVegetarian << endl;

  return *this;
}

void Dog::feed() {
  cout << "someone is driving this dog " << numOfLegs << " " << isVegetarian
       << endl;
}

void Dog::breed() {
  cout << "someone is breeding this dog " << numOfLegs << " " << isVegetarian
       << endl;
}

void Dog::walk() {
  cout << "someone is walking this dog " << numOfLegs << " " << isVegetarian
       << endl;
}