#include <iostream>

using namespace std;

int main()
{
    int num [4]  = {1,2,3,4};

    int value = 7 ;

    for(int i = 0; i < 4; i++)
    {
        for(int j = i; j < 4; j++)
        {
            if(num[i]+num[j] == value)
            {
                cout << i << ',' << j << endl;
            }
        }
    }
}
