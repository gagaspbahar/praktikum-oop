#ifndef __KENDARAAN_HPP__
#define __KENDARAAN_HPP__

#include <iostream>
#include <string>

using namespace std;

class Kendaraan {
private:
  int nomor;
  string kategori;
  string merk;
  int tahun;


public:
  Kendaraan();

  Kendaraan(int nomor, string kategori, string merk, int tahun);

  Kendaraan(const Kendaraan& k);

  ~Kendaraan();

  void printInfo();
  
  int biayaSewa(int lamaSewa);
};

class KoleksiKendaraan {
private:
  const int size;
  int Neff;
  Kendaraan *buffer;

public:
  KoleksiKendaraan();

  KoleksiKendaraan(int s);

  KoleksiKendaraan(const KoleksiKendaraan& k);

  ~KoleksiKendaraan();


  void printAll();
  void operator<<(Kendaraan k);
  void operator<<(KoleksiKendaraan kk);
};

#endif