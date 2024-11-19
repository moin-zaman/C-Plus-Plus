#include <iostream>

using namespace std;

int add(int *a, int size)
{
//    It will return the summ of the array;

    int sum = 0;
    for(int i = 0; i < size; i++)
    {
//        cout << a[i] << endl;

        sum = sum + *(a + i);

    }
    return sum;

}

int main()
{
    int arr[3] = {4,6,10};

    int result = add(arr,3);
    cout << "Sum = " << result << endl;

}
