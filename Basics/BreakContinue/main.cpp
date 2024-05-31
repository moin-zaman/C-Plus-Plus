#include <iostream>

using namespace std;

int main()
{
    int i ;

    for(i=0; i<=5; i++)
    {
        cout << i << endl;
    }

    cout << i << endl;

    for(int a=1; a<=100; a++)
    {
        if(a == 10)
        {
            continue;
        }
        if(a>13)
        {
            break;
        }
        cout << a << endl;
    }
}
