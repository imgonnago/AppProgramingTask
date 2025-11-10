#include <iostream>
using namespace std;

int main(){
    string song("Leave the door open");
    string bruno("Bruno Mars");
    string singer;

    cout << song + "를 부른 가수는";
    cout << "(힌트: 첫 글자는 " << bruno[0] << ")?";

    getline(cin, singer);
    if(singer == bruno){
        cout << "맞습니다";
    }
    else
        cout << "틀렸습니다. " + bruno + "입니다." << endl;
}

