#include "Animal.hpp"
#include "Dog.hpp"
#include "Chicken.hpp"
#include <iostream>

int main(){

    Dog d(false);
    Chicken c;
    Animal *a = new Chicken();
    Animal *a2 = new Animal(*a);
    c.~Chicken();
    c.feed();
    c.walk();
    a2->walk();
    d.walk();
    c.breed();
    delete a;
    Dog *d2 = new Dog(true);
    d2->Animal::breed();
    delete d2;
    delete a2;
    return 0;
}


// Expected Result
// ctor animal 4 0
// ctor dog 4 0
// ctor animal 2 1
// ctor chicken 2 1
// ctor animal 2 1
// ctor chicken 2 1
// cctor animal 2 1
// dtor chicken 2 1
// dtor animal 2 1
// someone is feeding this animal 2 1
// someone is walking this chicken 2 1
// someone is walking this animal 2 1
// someone is walking this dog 4 0
// someone is breeding this chicken 2 1
// dtor chicken 2 1
// dtor animal 2 1
// ctor animal 4 1
// ctor dog 4 1
// someone is breeding this animal 4 1
// dtor dog 4 1
// dtor animal 4 1
// dtor animal 2 1
// dtor chicken 2 1
// dtor animal 2 1
// dtor dog 4 0
// dtor animal 4 0