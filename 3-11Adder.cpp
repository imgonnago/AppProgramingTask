#include <iostream>
#include "3-11adder.h"
using namespace std;

Adder::Adder(int a, int b){
    op1 = a; op2 = b;
}

int Adder::process(){
    return op1 + op2;
}
