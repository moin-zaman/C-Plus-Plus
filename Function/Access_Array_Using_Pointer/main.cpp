#include <iostream>

using namespace std;



int main()
{
    int arr[5] = {10,20,30,40,50};

    int *p = &arr[0];

    for (int i = 0; i < 5; i++)
    {
        cout << *p << " ";
            *p++;
    }


}
