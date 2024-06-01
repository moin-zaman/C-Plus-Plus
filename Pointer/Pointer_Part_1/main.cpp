#include <iostream>

using namespace std;

int main()
{
     int x = 5;
//     cout  << x << endl;
//     cout << &x << endl;


    int *p;
    p = &x;
    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl;

//    int y = &x; // error


    int n1 = 5, n2 = 6;

    int *a, *b;
    a = &n1, b = &n2;

    int sum = *a + *b;

    cout << "Sum : " << sum << endl;



}
