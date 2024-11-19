#include <iostream>

using namespace std;

int main()
{
    int a[5] = {4,3,6,2,8};


    for(int i = 0; i < 5; i++)
    {
        cout << &a[i] << endl;
    }
    puts("");


    cout << "Address of Array : " << a << endl;
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        cout << a+i << endl;
    }
    puts("");





    for(int i = 0; i < 5; i++)
    {
        cout << *(a+i) << endl;
    }




    for(int i = 0; i < 5; i++)
    {
        sum = sum + *(a+i);
    }
    cout << "Sum = " << sum << endl;



}
