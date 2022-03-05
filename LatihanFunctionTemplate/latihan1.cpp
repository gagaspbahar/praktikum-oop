#include <iostream>

using namespace std;

template <class T>

T MinArray(const T a[], int n){
    T min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}

// Apakah mungkin MinArray digunakan untuk data bertype Jam?, Mungkin, apabila kelas Jam memiliki operator < yang terdefinisi

int main(){
    float f[] = {0.1,0.2,0.05,0.4};
    int i[] = {1,34,2524,354, -123123};

    cout << MinArray(f, 4) << endl;
    cout << MinArray(i, 5) << endl;
}