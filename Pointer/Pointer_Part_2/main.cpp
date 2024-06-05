#include <iostream>

using namespace std;

int main()
{
    int x  = 20;

    int *p = &x;

    int**px = &p;

    cout << **px << endl;

}
