// File sepuluhLampu.h
#include <string>
#include "Lampu.h"
#ifndef _SEPULUHLAMPU_HPP_
#define _SEPULUHLAMPU_HPP_
class Sepuluh_Lampu
{
private:
    Lampu *array_Lampu;
    int size;
    int Neff;

public:
    Sepuluh_Lampu();
    Sepuluh_Lampu(int);
    Sepuluh_Lampu(const Sepuluh_Lampu &);
    ~Sepuluh_Lampu();
    Sepuluh_Lampu &operator+(const Lampu &);
    Sepuluh_Lampu &operator*=(const Sepuluh_Lampu &);
    void atur_nyala(int);
    void PrintAll();
};
#endif