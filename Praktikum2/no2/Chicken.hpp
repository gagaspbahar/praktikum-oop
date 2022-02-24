#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "Animal.hpp"

class Chicken : public Animal {
public:
  // Constructor, copy constructor, destructor, dan operasi assignment
  Chicken();
  Chicken(const Chicken&);
  virtual ~Chicken();
  Chicken& operator=(const Chicken&);

  void ride();
  void breed();
  void walk();
};

#endif