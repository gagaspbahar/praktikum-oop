// Gagas Praharsa Bahar
// 13520016
// Hotel

#include "Hotel.h"
#include <iostream>

// User-defined constructor: set nilai atribut berdasarkan nilai parameter masukan
Hotel::Hotel(string name, string bintang, int openYear){
    this->name = name;
    this->bintang = bintang;
    this->openYear = openYear;
}
// Default constructor: set nilai atribut sbb:
// name = "noname"; openYear = 1900; bintang = "none"
Hotel::Hotel(){
    this->name = "noname";
    this->openYear = 1900;
    this->bintang = "none";
}
// Copy constructor
// TIDAK PERLU
// Destructor
// TIDAK PERLU
// Operator Assignment
// ... set_name(...)
void Hotel::set_name(string name){
    this->name = name;
}
// ... get_name()
string Hotel::get_name() const{
    return this->name;
}
// ... set_bintang(...)
void Hotel::set_bintang(string bintang){
    this->bintang = bintang;
}
// ... get_bintang()
string Hotel::get_bintang() const{
    return this->bintang;
}
// ... get_age(), asumsikan tahun saat ini dapat diaksesdengan makro CURRENT_YEAR
int Hotel::get_age() const{
    return CURRENT_YEAR - this->openYear;
}
// ... displayInfo(): Mencetak nama, umur hotel, bintang,dan room_rate
void Hotel::displayInfo(){
    cout << "Nama: " << this->name << endl;
    cout << "Bintang: " << this->bintang << endl;
    cout << "Hotel Age: " << this->get_age() << endl;
    cout << "Hotel Rate: " << this->rate() << endl;
}
// ... rate(): menghitung biaya menginap sesuai denganumur dan tergantung bintang hotel
int Hotel::rate() const{
    int ans = 0;
    if(this->bintang == "melati"){
        ans = this->get_age() * 30;
    } else if(this->bintang == "bintang_tiga"){
        ans = this->get_age() * 50;
    } else if(this->bintang == "bintang_empat"){
        ans = this->get_age() * 70;
    } else if(this->bintang == "bintang_lima"){
        ans = this->get_age() * 100;
    }
    return ans;
}

// bintang_empat ctor
bintang_empat::bintang_empat() : Hotel(){
    this->star = 0;
}

// user defined ctor
bintang_empat::bintang_empat(string nama, int openYear, int star) : Hotel(nama, "bintang_empat", openYear){
    this->star = star;
}

// set star
void bintang_empat::set_star(int star){
    this->star = star;
}

// get star
int bintang_empat::get_star(){
    return this->star;
}

// display bintang empat
void bintang_empat::displayInfo(){
    Hotel::displayInfo();
    cout << "Total Rate: " << this->rate() * this->star <<  endl;
}

// ctor
bintang_lima::bintang_lima(){
    this->facility = 0;
}

// user defined ctor
bintang_lima::bintang_lima(string nama, int openYear, int facility) : Hotel(nama, "bintang_lima", openYear){
    this->facility = facility;
}

// set facility
void bintang_lima::set_facility(int facility){
    this->facility = facility;
}

// get facility
int bintang_lima::get_facility(){
    return this->facility;
}

// calculate facility: facility*100000
int bintang_lima::calculateFacility(){
    return this->facility * 100000;
}

// display info for bintang lima
void bintang_lima::displayInfo(){
    Hotel::displayInfo();
    cout << "Expense: " << this->calculateFacility() <<  endl;
}