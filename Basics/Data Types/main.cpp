#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int a = 2, b = 3;
    int r = a + b;
    cout << "sum " << r << endl;

    double d = 2.45, f = 3.453245664;
    cout << "Double value " << d << endl << f << endl;

    float ff = 2.3543565;
    cout << "Float value " << ff << endl;

    char ch = 'a';
    cout << ch << endl;

    cout << typeid(d).name() << endl;


}
