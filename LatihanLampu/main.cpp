#include <iostream>
#include "SepuluhLampu.h"

using namespace std;

int main(){
    Sepuluh_Lampu sl;
    for(int i = 0; i < 10; i++){
        Lampu l = Lampu(i+1, false);
        sl = sl + l;
    }
    sl.atur_nyala(1);
    sl.PrintAll();
    sl.atur_nyala(4);
    sl.PrintAll();
    sl.atur_nyala(2);
    sl.PrintAll();
    sl.atur_nyala(3);
    sl.PrintAll();
}