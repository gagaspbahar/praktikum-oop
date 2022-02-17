#include "WarungSaltedEgg.hpp"
#include <iostream>

using namespace std;

WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam) : WarungNasi(uang, telur, nasi){
    this->telurAsin = telurAsin;
    this->ayam = ayam;
}

bool WarungSaltedEgg::masak(int pesanan){
    bool ans;
    if (this->getNasi() >= pesanan && this->getTelur() >= pesanan && this->telurAsin >= 3*pesanan && this->ayam >= pesanan)
    {
        ans = true;
        this->setUang(this->getUang() + pesanan * 30000);
    }
    else
    {
        ans = false;
    }
    return ans;
}