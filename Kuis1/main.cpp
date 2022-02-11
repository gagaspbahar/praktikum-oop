// Nama: Gagas Praharsa Bahar
// NIM: 13520016
// K01
// main.cpp
// 11 Februari 2022

#include "CWTime.h"
#include <iostream>

using namespace std;
int main(){
    CarWash c;
    CWTime ct = CWTime(20, "automatic");
    ct.Print();
    ct = ct + 1;
    ct.Print();
    c << ct;
    c << CWTime(10,"handwash");
    c << CWTime(15, "automatic");
    CarWash c2 = c;
    CWTime ctbuangan;
    c >> ctbuangan;
    ctbuangan.Print();
}