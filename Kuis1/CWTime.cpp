// Nama: Gagas Praharsa Bahar
// NIM: 13520016
// K01
// CWTime.cpp
// 11 Februari 2022

#include "CWTime.h"
#include <iostream>
using namespace std;

CWTime::CWTime()
{
    this->minutes = 0;
    this->seconds = 0;
    this->layanan = "";
}

CWTime::CWTime(int h, int m, int s, string l)
{
    this->minutes = h * 60 + m;
    this->seconds = s;
    this->layanan = l;
}

CWTime::CWTime(int m, string l)
{
    this->minutes = m;
    this->seconds = 0;
    this->layanan = l;
}

CWTime::CWTime(const CWTime &t)
{
    this->minutes = t.minutes;
    this->seconds = t.seconds;
    this->layanan = t.layanan;
}

CWTime::~CWTime()
{
    // Destructor
}

float CWTime::InMinutes() const
{
    float secInMin = (float)this->seconds / 60;
    return this->minutes + secInMin;
}

CWTime CWTime::operator+(int m)
{
    this->minutes += m;
    return *this;
}

CWTime operator+(int m, CWTime Ct)
{
    Ct = Ct + m;
    return Ct;
}

CWTime &CWTime::operator++()
{
    this->minutes++;
    return *this;
}

void CWTime::Print() const
{
    string h = (this->minutes / 60) > 9 ? to_string(this->minutes / 60) : "0" + to_string(this->minutes / 60);
    string m = (this->minutes % 60) > 9 ? to_string(this->minutes % 60) : "0" + to_string(this->minutes % 60);
    string s = (this->seconds) > 9 ? to_string(this->seconds) : "0" + to_string(this->seconds);

    cout << h << ":" << m << ":" << s << endl;
}

string CWTime::get_service()
{
    return this->layanan;
}

CarWash::CarWash() : size(100)
{
    this->tail = -99;
    this->buffer = new CWTime[this->size];
}

CarWash::CarWash(int _size) : size(_size)
{
    this->tail = -99;
    this->buffer = new CWTime[this->size];
}

CarWash::CarWash(const CarWash &C) : size(C.size)
{
    this->tail = C.tail;
    for (int i = 0; i <= C.tail; i++)
    {
        this->buffer[i] = C.buffer[i];
    }
}

CarWash::~CarWash()
{
    delete[] this->buffer;
}

CarWash &CarWash::operator<<(const CWTime &Ct)
{
    this->tail++;
    this->buffer[tail] = Ct;
    return *this;
}

void CarWash::operator>>(CWTime &Ct)
{
    Ct = this->buffer[0];
    // this->buffer[0].Print();
    for(int i = 1; i < this->tail; i++){
        this->buffer[i-1] = this->buffer[i];
    }
    this->tail--;
}

long CarWash::BiayaCuci(CWTime &Ct)
{
    long biayaLayanan = Ct.get_service() == "automatic" ? 20000 : 50000;
    return Ct.InMinutes() * 2000 + biayaLayanan;
}