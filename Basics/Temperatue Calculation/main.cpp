#include <iostream>

using namespace std;

int main()
{
    float f;
    cout << "Please enter the farenhite value of temperature :" << endl;
    cin >> f;

    float c = (f - 32)/1.8;
    cout << f << " degree farenhite = " << c << " degree celcius " << endl;

    f = (1.8*c + 32);

    cout << c << " degree Celcius = " << f << " degree Farenhite " << endl;



}
