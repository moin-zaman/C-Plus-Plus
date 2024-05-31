#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter any number : ";
    cin >> n;

    int count = 0;
    int first = 0, second = 1, fibo;

    while(count<n)
    {
        if(count<=1)
        {
            fibo = count;
            cout << fibo << " " ;
            count++;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;

            cout << fibo << " ";

            count++;
        }
    }
}
