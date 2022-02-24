#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
public:
  // Constructor, copy constructor, destructor, dan operasi assignment
  Animal();
  Animal(int numOfLegs, bool isVegetarian);
  Animal(const Animal&);
  virtual ~Animal();
  Animal& operator=(const Animal&);

  void feed();
  void breed();
  virtual void walk();

protected:
  int numOfLegs;      // jumlah kaki
  bool isVegetarian;  // apakah hewan vegetarian
};

#endif