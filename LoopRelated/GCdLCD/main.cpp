#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Please enter any 2 integer numbers : ";
    cin >> num1 >> num2;

    int n1 = num1, n2= num2;
    int rem = 0;

    while(n2!=0)
    {
        rem = n1%n2;
        n1=n2;
        n2=rem;
    }
    int gcd = n1;
    cout << "GCD of " << num1 << " and " << num2 << " is : " << gcd << endl;
    int lcd = (num1*num2)/gcd;
    cout << "LCD of " << num1 << " and " << num2 << " is : " << lcd << endl;

}
