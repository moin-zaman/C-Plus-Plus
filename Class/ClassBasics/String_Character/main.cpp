#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //char ch[6] = {'h','e','l','l','o'};
    char ch[] = {'h','e','l','l','o','\0'};

    char name [] = "Moin Zaman";

    cout << ch << endl;
    cout << ch[4] << endl;

    cout << name << endl;

    char na [11];
    gets(na);
    cout << na << endl;

}
