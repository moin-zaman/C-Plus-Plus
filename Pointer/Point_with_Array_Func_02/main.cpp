#include <iostream>

using namespace std;

int main()
{
    int a[5] = {4,3,6,2,8};

    int *p = &a[3];
    cout << *p << endl;
    cout << *(p+1) << endl;
    cout << *(p-1) << endl;
}
