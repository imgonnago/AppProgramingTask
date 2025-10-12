#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    string address("경기도 파주시 후곡로50");
    string copyAddress(address);

    char text[] = {'M','A', 'E', ' ','+'};
    string title(text);

    cout << str << endl;
    cout << address << endl;
    cout <<  copyAddress << endl;
    cout << title << endl;
}