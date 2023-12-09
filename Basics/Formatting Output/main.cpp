#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char c;
    float f;
    int i;

    cout << "Char's default value: " << c << endl;

    cout << "Char's size in byte: " << sizeof(c) << endl;
    cout << "Integer's size in byte " << sizeof(i) << endl;
    cout << "float's size in byte " << sizeof(f) << endl;

    int a =5, b=3;
    double d = a; // d = 5 , output : 5;  d = a , output : 5
    cout << "D = " << d << endl;
    double r = d/b;
    cout << r << endl;

    int x = 20;
    double y = x;
    //cout << showpoint; // it shows the decimal number even it is in the form of digit.00 or in integer form but stored in double variable
    cout << showpoint << y << endl;
    cout << endl;

    double x2 = 20;
    cout << noshowpoint;
    cout << x2 << endl ;

    double f2 = 20.12343242344;

    cout<< showpoint;
    cout << fixed;
    cout << setprecision(7);
//    cout << fixed; // same thing . just need to write before printing the value
    cout << f2 << endl;

}
