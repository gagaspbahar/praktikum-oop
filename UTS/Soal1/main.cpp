// Gagas Praharsa Bahar
// 13520016
// Hotel

#include "Hotel.h"
#include <iostream>
using namespace std;

int main(){
    Hotel *aston = new bintang_empat("Hotel Aston", 2010, 4);
    Hotel *padma = new bintang_lima("Hotel Padma", 2000, 5);
    aston->displayInfo();
    cout << endl;
    padma->displayInfo();
    delete aston;
    delete padma;
}