#include <iostream>

using namespace std;

void  display(int a =20, int b = 30)
    {
        cout << a << endl;
        cout << b << endl;
    }

    void  display1(int a, int b = 30)
    {
        cout << a << endl;
        cout << b << endl;
    }

int main()
{
    display(25, 40);
    display(10);
    display();
    display1(50);

}
