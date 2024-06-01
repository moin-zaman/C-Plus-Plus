#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter the size of an array : ";
    cin >> n;

    int num[n], num1[n];

    for(int i = 0; i < n; i++)
    {
        cout << "num [" << i << "] = ";
        cin >> num[i];
    }
    for(int i = 0; i < n; i++)
    {
        num1[i] = num[i];
    }

    cout << "Element of array num2 : " << "[ ";
    for(int i = 0; i < n; i++)
    {
        cout << num1[i] << " ";
    }
    cout << "]" << endl;




}
