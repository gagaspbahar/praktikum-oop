#include <iostream>
#include "PQElmt.hpp"

using namespace std;

int main(){
    PQElmt a = PQElmt(3,6);
    PQElmt b = PQElmt(3,0);
    if(a == b){
        cout << "sam";
    }
    if(a < b){
        cout << "kec";
    }
    if(a > b){
        cout << "ged";
    }
}