#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        int randNum = rand()%5;
        cout << "Random Number : " << randNum << endl;
    }

    cout << endl << endl;

    for(int i = 1; i <= 5; i++)
    {
        int randNum = rand()%6+1;
        cout << "Random Number : " << randNum << endl;
    }
}
