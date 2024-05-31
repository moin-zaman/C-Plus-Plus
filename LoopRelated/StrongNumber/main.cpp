#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;

    int r, sum = 0, temp = num, fact;

    while(temp!=0)
    {
        r = temp%10;
        temp = temp/10;
        fact = r;

        for(int i = r-1; i>=1; i--)
            {
                fact = fact*i;
            }
            sum = sum+fact;
    }

    if(num == sum)
    {
        cout << num << " = " << sum << " so " << num << " is a strong number" << endl;
    }
    else
    {
        cout << num << " != " << sum << " so " << num << " is not a strong number" << endl;
    }
}
