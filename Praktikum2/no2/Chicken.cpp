#include "Chicken.hpp"

#include <iostream>

using namespace std;

Chicken::Chicken() : Animal(2, 1) {
  cout << "ctor chicken " << numOfLegs << " " << isVegetarian << endl;
}

Chicken::Chicken(const Chicken& chicken) : Animal::Animal(chicken) {
  this->numOfLegs = chicken.numOfLegs;
  this->isVegetarian = chicken.isVegetarian;

  cout << "cctor chicken " << numOfLegs << " " << isVegetarian << endl;
}

Chicken::~Chicken() {
  cout << "dtor chicken " << numOfLegs << " " << isVegetarian << endl;
}

Chicken& Chicken::operator=(const Chicken& chicken) {
  this->numOfLegs = chicken.numOfLegs;
  this->isVegetarian = chicken.isVegetarian;
  cout << "assign chicken " << numOfLegs << " " << isVegetarian << endl;

  return *this;
}

void Chicken::ride() {
  cout << "someone is riding this chicken " << numOfLegs << " " << isVegetarian
       << endl;
}

void Chicken::breed() {
  cout << "someone is breeding this chicken " << numOfLegs << " "
       << isVegetarian << endl;
}

void Chicken::walk() {
  cout << "someone is walking this chicken " << numOfLegs << " " << isVegetarian
       << endl;
}