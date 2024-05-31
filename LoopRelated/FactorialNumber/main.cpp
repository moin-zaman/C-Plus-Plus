#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Please enter any integer number : ";
    cin >> num;
    int fact = num;

    for(int i=num-1; i>=1; i--)
    {
        fact = fact*i;

    }
    cout << "Factorial of " << num << " is " << fact << endl << endl;

    int num1;
    cout << "Please enter any another number : ";
    cin >> num1;
    int temp = num1;

    for(int i=1; i<=num1-1; i++)
    {
        temp = temp*i;
    }

    cout << "Factorial of " << num1 << " is " << temp << endl << endl;


    int num2;
    cout << "Please enter any another number2 : ";
    cin >> num2;
    int temp2 = 1;

    for(int i=1; i<=num2; i++)
    {
        temp2 = temp2*i;
    }

    cout << "Factorial of " << num2 << " is " << temp2 << endl;


}
