#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Please enter any Integer number : ";
    cin >> num1;

    int temp = num1;
    int r, arms = 0;

    while(temp!=0)
    {
        r = temp%10;
        r = r*r*r;
        arms = arms+r;
        temp = temp/10;
    }
    if(num1 == arms)
    {
        cout << num1 << " is a Armstrong number" << endl;

    }
    else
    {
        cout << num1 << " is not a Armstrong number" << endl;
    }

}
