#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Please enter any Integer number : ";
    cin >> num1;

    int temp = num1;
    int r, sum = 0;

    while(temp!=0)
    {
        r = temp%10;
        sum = sum+r;
        temp = temp/10;
    }
    cout << "Sum of " << num1 << " = " << sum << endl;

}
