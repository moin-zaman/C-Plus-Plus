#include <iostream>

using namespace std;

int main()
{
    cout << "Pattern 1 " << endl;
    int n;
    cout << "Please enter a number : ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Pattern 2 " << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl << endl;



    cout << "Pattern 3 " << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j%2 << " ";
        }
        cout << endl;
    }

    cout << endl << endl;


    cout << "Pattern 4 " << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i%2 << " ";
        }
        cout << endl;
    }

    cout << endl << endl;


    cout << "Pattern 5 " << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            char ch = 64+j;
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl << endl;


    cout << "Pattern 6 " << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            char ch = 64+i;
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl << endl;



    cout << "Pattern 7 " << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl << endl;


    cout << "Pattern 8 " << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "#" << " ";
        }
        cout << endl;
    }

    cout << endl << endl;




}
