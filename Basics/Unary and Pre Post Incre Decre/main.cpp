#include <iostream>

using namespace std;

int main(){

    int x = -1;
    int y = -x;
    cout << y << endl;

    int a , b;
    a=6;
    b=5;

    //increment

    b=a++;
    cout << a << endl; // 7
    cout << b << endl; //6

    b = ++a;
    cout << a << endl; //8
    cout << b << endl; //8

    //Decrement

    a = b--;
    cout << b << endl; //7
    cout << a << endl; //8

    a = --b;
    cout << b << endl; //6
    cout << a << endl; //6






}
