#include <iostream>
#include "SepuluhLampu.h"

using namespace std;

Sepuluh_Lampu::Sepuluh_Lampu(){
    this->size = 10;
    this->Neff = 0;
    this->array_Lampu = new Lampu[this->size];
}

Sepuluh_Lampu::Sepuluh_Lampu(int s){
    this->size = 10;
    this->Neff = s;
    this->array_Lampu = new Lampu[this->size];
    for(int i = 0; i < s; i++){
        Lampu l = Lampu(i+1, false);
        this->array_Lampu[i] = l;
    }
}

Sepuluh_Lampu::Sepuluh_Lampu(const Sepuluh_Lampu &sl){
    this->size = sl.size;
    this->Neff = sl.Neff;
    this->array_Lampu = new Lampu[this->size];
    for(int i = 0; i < sl.Neff; i++){
        this->array_Lampu[i] = sl.array_Lampu[i];
    }
}

Sepuluh_Lampu::~Sepuluh_Lampu(){
    delete[] this->array_Lampu;
}

Sepuluh_Lampu & Sepuluh_Lampu::operator+(const Lampu &l){
    if (this->Neff < this->size){
        array_Lampu[Neff] = l;
        this->Neff++;
    }
    return *this;
}

Sepuluh_Lampu & Sepuluh_Lampu::operator*=(const Sepuluh_Lampu &){
    return *this;
}

void Sepuluh_Lampu::atur_nyala(int n){
    for(int i = n-1; i < this->Neff; i += n){
        if(this->array_Lampu[i].get_info() && n != 10 && n != 1){
            this->array_Lampu[i].set_mati();
        }
        else{
            this->array_Lampu[i].set_nyala();
        }
    }
}

void Sepuluh_Lampu::PrintAll(){
    for(int i = 0; i < this->Neff; i++){
        this->array_Lampu[i].PrintInfo();
    }
    cout << "\n";
}