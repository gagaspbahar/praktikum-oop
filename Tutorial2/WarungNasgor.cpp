#include "WarungNasgor.hpp"
#include <iostream>

using namespace std;
WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap) : WarungNasi(uang, telur, nasi)
{
    this->kecap = kecap;
}

bool WarungNasgor::masak(int pesanan)
{
    bool ans;
    if (this->getNasi() >= pesanan && this->getTelur() >= pesanan && this->kecap >= pesanan)
    {
        ans = true;
        this->setUang(this->getUang() + pesanan * 15000);
    }
    else
    {
        ans = false;
    }
    return ans;
}