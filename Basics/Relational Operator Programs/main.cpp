#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Please enter any integer numbers : ";
    //cin >> num;

    if(cin >> num1)
    {
        if(num1%2==0)
        {
            cout << num1 << " is a Even number" << endl;
        }
        else
        {
            cout << num1 << " is a Odd number" << endl;
        }
    }
    else
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Please enter any valid input " << endl;
    }

    cout <<endl <<endl << "Large Small Between 2 numbers" << endl;

    cout << "Please enter the 2 integer numbers : ";

    if(cin >> num1 >> num2)
    {
        if(num1 > num2)
        {
            cout << num1 << " is greater than " << num2 << endl;
        }
        else{
            cout << num2 << " is greater than " << num1 << endl;
        }
    }
    else{
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Please enter the valid inputs " << endl;
    }


    cout << endl << endl << "Please enter your marks : ";
    cin >> num1;

    if(cin.good())
    {
        if(num1 < 0 && num1 > 100)
        {
            cout << "Please enter your marks between 0 to 100" << endl;
        }
        else if(num1 >= 50 && num1 <= 100)
        {
            cout << "Congrats!! You are passed" << endl;
        }
        else{
            cout << "Sorray You are failed" << endl;
        }
    }
    else
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Please enter any valid marks " << endl;
    }

}
