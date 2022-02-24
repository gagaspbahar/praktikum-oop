#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
  // Constructor, copy constructor, destructor, dan operasi assignment
  Dog(bool isVegetarian);
  Dog(const Dog&);
  virtual ~Dog();
  Dog& operator=(const Dog&);

  void feed();
  void breed();
  void walk();
};

#endif