#include <iostream>
#include "Lampu.h"

using namespace std;

Lampu::Lampu()
{
    this->no_lamp = 0;
    this->nyala_lampu = false;
}

Lampu::Lampu(int no, bool nyala)
{
    this->no_lamp = no;
    this->nyala_lampu = nyala;
}

Lampu::Lampu(const Lampu &l)
{
    this->no_lamp = l.no_lamp;
    this->nyala_lampu = l.nyala_lampu;
}

void Lampu::set_nyala()
{
    this->nyala_lampu = true;
}

void Lampu::set_mati()
{
    this->nyala_lampu = false;
}

bool Lampu::get_info()
{
    return this->nyala_lampu;
}

void Lampu::PrintInfo() const
{
    cout << "Nomor Lampu: " << this->no_lamp << endl;
    cout << "Status: " << (this->nyala_lampu ? "Nyala" : "Mati") << endl;
}