#include <iostream>

using namespace std;

void PassByValue(int num)
{
    num = 20;
}

void PassByReference(int *num)
{
    *num = 20;
}

int main()
{
    int x = 30;
    cout << "Before calling the PassByValue x is " << x << endl;

    PassByValue(x);
    cout << "After calling the PassByValue x is " << x << endl;

    PassByReference(&x);
    cout << "After calling the PassByReference x is " << x << endl;




}
