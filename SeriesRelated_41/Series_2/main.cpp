#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Sum of 1.5 to N Numbers" << endl << endl << endl;

    double n, sum = 0;
    cout << "Please enter any number : ";

    cin >> n;

    for(double i = 1.5; i<=n; i++)
    {
        sum = sum+i;
    }

    cout << "Sum of 1.5 to " << n << " = " << sum << endl << endl;


    cout << "Sum of square of 1 to N Numbers" << endl << endl;

    int n1, sum1 = 0;
    cout << "Please enter any integer number : ";
    cin >> n1;

//    for(int i = 1; i <= n; i++)
//    {
//        sum1 = sum1 + (i*i);
//    }


    for(int i = 1; i <= n; i++)
    {
        sum1 = sum1 + pow(i,2);
    }


    cout << "Sum of square of 1 to " << n << " = " << sum1 << endl << endl;



}
