#include <iostream>

using namespace std;

int add(int , int);
double division(double , double);

int main()
{
    int sum = add(10,20);

    cout << "Sum is " << sum << endl;

    double divid = division(5.76, 2.43);
    cout << "Division is " << divid << endl;

}

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

double division(double a, double b)
{
    double divi = a / b;
    return divi;
}
