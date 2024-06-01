#include <iostream>

using namespace std;

void arrPass(int arr[], int size)
{
    cout << "Elements of Passing Array is ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Please enter the size of an array : ";
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++)
    {
        cout << "array [" << i << "] = ";
        cin  >> array[i];
    }

    arrPass(array, n);
}
