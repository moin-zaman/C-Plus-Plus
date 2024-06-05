#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name [] = "Moin";

    strupr(name);
    cout << name << endl;

    strlwr(name);
    cout << name << endl;

    char name1 [] = "Moin";
    char name2 [] = "Moin";

    int value = strcmp(name1,name2);


    if(value==0)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }
}
