#include <iostream>
#include "Box.hpp"
using namespace std;

int main(){
    Box* box2 = new Box(2);
    Box* boxempty = new Box();
    Box* box1 = new Box(1);
    *boxempty = *box2;
    Box* boxcopy = new Box(*box1);
    box2->peek();
    box1->peek();
    box2->~Box();
    box1->~Box();
    boxcopy->~Box();
    boxempty->~Box();
}

// new empty box 2
// new empty box with default id 0
// new empty box 1
// assign box 0 <- 2
// copy box 1
// box 2
// box 1
// destroy box 2
// destroy box 1
// destroy box 1
// destroy box 2