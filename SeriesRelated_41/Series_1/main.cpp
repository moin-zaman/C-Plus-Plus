#include <iostream>

using namespace std;

int main()
{
    cout << "Sum of 1 to N Numbers" << endl << endl << endl;

    int n, sum = 0;
    cout << "Please enter any number : ";

    cin >> n;

    for(int i = 0; i<=n; i++)
    {
        sum = sum+i;
    }

    cout << "Sum of 0 to " << n << " numbers = " << sum << endl << endl;

    cout << "Sum of Even numbers " << endl << endl;

    int sumEven = 0;

//    for(int i = 2; i<=n; i++)
//    {
//        if(i%2==0)
//        {
//            sumEven = sumEven + i;
//        }
//    }

    for(int i = 2; i<=n; i+=2)
    {
        sumEven = sumEven+i;
    }

    cout << "Sum of even numbers from 2 to " << n << " = " <<sumEven << endl << endl;

    cout << "Sum of Odd numbers " << endl << endl;

    int sumOdd = 0;

    for(int i = 2; i<=n; i++)
    {
        if(i%2!=0)
        {
            sumOdd = sumOdd+i;
        }
    }

    cout << "Sum of Odd numbers from 2 to " << n << " = " <<sumOdd << endl << endl;
}
