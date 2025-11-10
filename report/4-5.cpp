#include <iostream>
using namespace std;

int main(){
    int *P;

    P = new int;
    if(!P){
        cout << "메모리를 할당할 수 없습니다. ";
        return 0;
    }

    *P = 5;
    int n = *P; 
    cout << "*P = " << *P << "\n";
    cout << "n= " << n << "\n";

    delete P;
}