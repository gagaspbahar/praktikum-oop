#include "kendaraan.hpp"

Kendaraan::Kendaraan()
{
    this->nomor = 0;
    this->tahun = 0;
    this->merk = "XXX";
    this->kategori = "mobil";
}

Kendaraan::Kendaraan(int nomor, string kategori, string merk, int tahun)
{
    this->nomor = nomor;
    this->tahun = tahun;
    this->merk = merk;
    this->kategori = kategori;
}

Kendaraan::Kendaraan(const Kendaraan &k)
{
    this->nomor = k.nomor;
    this->tahun = k.tahun;
    this->merk = k.merk;
    this->kategori = k.kategori;
}

Kendaraan::~Kendaraan()
{
    // Destructor
}

void Kendaraan::printInfo()
{
    cout << "Nomor: " << this->nomor << endl;
    cout << "Merk: " << this->merk << endl;
    cout << "Kategori: " << this->kategori << endl;
    cout << "Tahun: " << this->tahun << endl;
}

int Kendaraan::biayaSewa(int lamaSewa)
{
    int ans = 0;
    if (this->kategori == "Bus")
    {
        ans = 1000000 * lamaSewa;
    }
    else if (this->kategori == "Minibus")
    {
        if (lamaSewa <= 5)
        {
            ans = 5000000;
        }
        else
        {
            ans = 5000000 + 500000 * (lamaSewa - 5);
        }
    }
    else if (this->kategori == "Mobil")
    {
        ans = 500000 * lamaSewa;
    }
    return ans;
}

KoleksiKendaraan::KoleksiKendaraan() : size(100)
{
    this->Neff = 0;
    this->buffer = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(int s) : size(s)
{
    this->Neff = 0;
    this->buffer = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan &k) : size(k.size)
{
    this->Neff = k.Neff;
    this->buffer = new Kendaraan[this->size];
    for(int i = 0; i < this->Neff; i++){
        this->buffer[i] = k.buffer[i];
    }
}

KoleksiKendaraan::~KoleksiKendaraan()
{
    // Destructor
}

void KoleksiKendaraan::printAll(){
    for(int i = 0; i < this->Neff; i++){
        cout << "Kendaraan ke-" << i+1 << ":" << endl;
        this->buffer[i].printInfo();
    }
}

void KoleksiKendaraan::operator<<(Kendaraan k){
    this->buffer[Neff] = k;
    this->Neff++;
}

void KoleksiKendaraan::operator<<(KoleksiKendaraan k){
    for(int i = 0; i < k.Neff; i++){
        this->buffer[Neff] = k.buffer[i];
        this->Neff++;
    }
}