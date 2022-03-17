// Class Property
// File: Property.cpp

#include <string>
#include <iostream>
#include "Property.h"
using namespace std;

// User-defined constructor: set nilai atribut berdasarkan nilai
// parameter masukan
Property::Property(string name, string type, int openYear){
    this->name = name;
    this->openYear = openYear;
    this->type = type;
}
// Default constructor: set nilai atribut sbb:
// name = "noname"; openYear = 1900; type = "none"
Property::Property(){
    this->name = "noname";
    this->openYear = 1900;
    this->type = "none";
}
    
// Copy constructor
// Destructor
// Operator Assignment
// ... set_name(...)
void Property::set_name(string name){
    this->name = name;
}
// ... get_name()
string Property::get_name(){
    return this->name;
}
// ... set_type(...)
void Property::set_type(string type){
    this->type = type;
}
// ... get_type()
string Property::get_type(){
    return this->name;
}
// ... get_age(), asumsikan tahun saat ini dapat diakses dengan
// makro CURRENT_YEAR
int Property::get_age(){
    return CURRENT_YEAR - this->openYear;
}
// ... displayInfo(): Mencetak nama, umur, type, dan rate Property
void Property::displayInfo(){
    cout << "Nama: " << this->name << endl;
    cout << "Umur: " << this->get_age() << endl;
    cout << "Type: " << this->type << endl;
    cout << "Rate: " << this->rate() << endl;
}
// ... rate(): menghitung biaya property sesuai dengan umur dan
// tergantung type property
int Property::rate(){
    int rate = 0;
    if (this->type == "hotel") {
        rate = this->get_age() * 100;
    } else if (this->type == "hostels") {
        rate = this->get_age() * 80;
    } else if (this->type == "villas") {
        rate = this->get_age() * 50;
    } else if (this->type == "cottages") {
        rate = this->get_age() * 30;
    }
    return rate;
}


Hotel::Hotel() : Property(){
    this->star = 0;
}

Hotel::Hotel(string name, int openYear, int star) : Property(name,"hotel", openYear) {
    this->star = star;
}

void Hotel::set_star(int star){
    this->star = star;
}

int Hotel::get_star(){
    return this->star;
}

void Hotel::displayInfo(){
    Property::displayInfo();
    cout << "Total rate: " << this->rate() * this->star << endl;
}


Hostel::Hostel() : Property(){
    this->facility = 0;
}

Hostel::Hostel(string name, int openYear, int facility) : Property(name, "hostels", openYear) {
    this->facility = facility;
}

void Hostel::set_facility(int facility){
    this->facility = facility;
}

int Hostel::get_facility(){
    return this->facility;
}

int Hostel::calculateFacility(){
    return this->facility * 80000;
}

void Hostel::displayInfo(){
    Property::displayInfo();
    cout << "Expense: " << this->calculateFacility() << endl;
}