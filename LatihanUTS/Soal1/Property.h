// Class Property
// File: Property.h
#ifndef PROPERTY_H
#define PROPERTY_H
#define CURRENT_YEAR 2022

#include <string>
using namespace std;
class Property
{
protected:
    // Atribut
    string name;
    string type; // hotel; hostels; villas; cottages
    int openYear;

public:
    // User-defined constructor: set nilai atribut berdasarkan nilai
    // parameter masukan

    Property(string name, string type, int openYear);

    // Default constructor: set nilai atribut sbb:
    // name = "noname"; openYear = 1900; type = "none"

    Property();
        
    // Copy constructor
    // Destructor
    // Operator Assignment
    // ... set_name(...)
    void set_name(string name);
    // ... get_name()
    string get_name();
    // ... set_type(...)
    void set_type(string type);
    // ... get_type()
    string get_type();
    // ... get_age(), asumsikan tahun saat ini dapat diakses dengan
    // makro CURRENT_YEAR
    int get_age();
    // ... displayInfo(): Mencetak nama, umur, type, dan rate Property
    void displayInfo();
    // ... rate(): menghitung biaya property sesuai dengan umur dan
    // tergantung type property
    int rate();
};

class Hotel : public Property {
private:
    int star;
public:
    Hotel();
    Hotel(string name, int openYear, int star);
    void set_star(int star);
    int get_star();
    void displayInfo();
};

class Hostel : public Property {
private:
    int facility;
public:
    Hostel();
    Hostel(string name, int openYear, int facility);
    void set_facility(int facility);
    int get_facility();
    int calculateFacility();
    void displayInfo();
};

#endif // PROPERTY_H