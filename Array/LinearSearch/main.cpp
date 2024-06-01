#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter the size of an array : ";
    cin >> n;

    int num[n];

    for(int i = 0; i < n; i++)
    {
        cout << "num [" << i << "] = ";
        cin >> num[i];
    }

    int value;

    cout << "Please enter any value to search in the array : ";
    cin >> value;
    cout << endl;

    int pos = -1;

    for(int i = 0; i < n; i++)
    {
        if(value == num[i])
        {
            pos = i + 1;
            break;
        }
    }

    if(pos != -1)
    {
        cout << value << " has found in the " << pos << "th position" << endl;
    }
    else
    {
        cout << value << " has not found in the array" << endl;
    }



}
