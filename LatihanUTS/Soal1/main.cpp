#include "Property.h"
#include <iostream>
using namespace std;

int main(){
    Hotel hilton = Hotel("Hotel Hilton", 2000, 5);
    Hostel vio = Hostel("Hostel Vio", 2003, 5);
    hilton.displayInfo();
    vio.displayInfo();
}