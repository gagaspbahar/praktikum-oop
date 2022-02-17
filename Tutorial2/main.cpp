#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include <iostream>

int main(){
    Car* c = new Car(4);
    Car* c10 = new Car(10);
    Bike* b = new Bike();
    Vehicle* v = new Vehicle(*b);
    b->~Bike();
    c10->Vehicle::drive();
    v->clean();
    c->drive();
    v->park();
    c10->~Car();
    v->~Vehicle();
    c->~Car();
}



// ctor vehicle 4 4
// ctor car 4 4
// ctor vehicle 4 10
// ctor car 4 10
// ctor vehicle 2 2
// ctor bike 2 2
// cctor vehicle 2 2
// dtor bike 2 2
// dtor vehicle 2 2
// someone is driving this vehicle 4 10
// someone is cleaning this vehicle 2 2
// someone is driving this car 4 4
// someone is parking this vehicle 2 2
// dtor car 4 10
// dtor vehicle 4 10
// dtor vehicle 2 2
// dtor car 4 4
// dtor vehicle 4 4