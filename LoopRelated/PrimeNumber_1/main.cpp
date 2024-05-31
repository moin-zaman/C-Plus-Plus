#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Please enter any number : ";
    cin >> num;

    int count = 0;

    for(int i = 2; i <= num/2; i++)
    {

        if(num%i==0)
        {
            count = 1;
            break;
        }
    }

    if(count == 0)
    {
        cout << num << " is a prime number" << endl;
    }

    else
    {
        cout << num << " is not a prime number" << endl;
    }
}
