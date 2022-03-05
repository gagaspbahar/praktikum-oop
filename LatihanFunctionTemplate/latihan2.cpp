#include <iostream>

using namespace std;

template <class T>

void PrintArray(const T arr[], int n){
    if(!n){
        cout << "Array kosong" << endl;
    }
    else{
        cout << "[";
        for(int i = 0; i < n-1; i++){
            cout << arr[i] << ",";
        }
        cout << arr[n-1];
        cout << "]";
    }
}

// Bagaimana kalau yang ingin dicetak adalah Point? Tidak bisa apabila menggunakan std::cout, harus menggunakan function overloading.

int main(){
    float f[] = {0.1,0.2,0.05,0.4};
    int i[] = {1,34,2524,354, -123123};
    char c[] = {'a', 'b', 'c', 'f'};

    PrintArray(f,4);
    cout << endl;
    PrintArray(i,5);
    cout << endl;
    PrintArray(c,4);
}