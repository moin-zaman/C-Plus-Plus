#include <iostream>

using namespace std;

void add(int, int);
void sub(int, int);
void mul(int, int);
void division(int, int);

int main()
{

    add(7,4);
    sub(11,5);
    mul(6,3);
    division(7,4);

}

void add(int a,int b)
{
    int sum = a+b;
    cout << "Sum is " << sum << endl;
}
void sub(int a,int b)
{
    int sub = a-b;
    cout << "Sub is " << sub << endl;
}

void mul(int a,int b)
{
    int mul = a*b;
    cout << "Mul is " << mul << endl;
}

void division(int a,int b)
{
    float div = (float)a/b;
    cout << "Div is " << div << endl;
}
