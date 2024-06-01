#include <iostream>

using namespace std;

void display(int a, int b)
{
    int sum = a + b ;
    cout << "Sum : " << sum << endl;
}

void display(int a, double b)
{
    double sum = a + b ;
    cout << "Sum : " << sum << endl;
}

void display(double a, int b)
{
    double sum = a + b ;
    cout << "Sum : " << sum << endl;
}

int main()
{
    display(10, 20);
    display(10, 20.76);
    display(10.453, 20);
}
