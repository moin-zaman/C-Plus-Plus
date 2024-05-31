#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Please enter any Integer number : ";
    cin >> num1;

    int temp = num1;
    int r, reverse = 0;

    while(temp!=0)
    {
        r = temp%10;
        reverse = reverse*10+r;
        temp = temp/10;
    }
    if(num1 == reverse)
    {
        cout << num1 << " is a palindrome number" << endl;

    }
    else
    {
        cout << num1 << " is not a Palindrome number" << endl;
    }

}
