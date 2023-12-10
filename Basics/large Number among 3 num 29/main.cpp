#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Please enter any 3 numbers : ";
    cin >> n1 >> n2 >> n3;

    if(!cin.fail())
    {
        if(n1>n2 && n1>n3)
        {
            cout << n1 << " is greater than " << n2 << " and " << n3 << endl;
        }

        else if(n2>n1 && n2>n3)
        {
            cout << n2 << " is greater than " << n1 << " and " << n3 << endl;
        }
        else
        {
            cout << n3 << " is greater than " << n1 << " and " << n2 << endl;
        }
    }
    else
    {
        cout << "Please enter the valid integer numbers " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }



    int b;
    //cout << "please enter b " ;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> b;
    cout << b << endl;
}
