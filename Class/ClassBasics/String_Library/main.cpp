#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[] = "Moin Zaman";
    int len = strlen(name);

    cout << "Length of String : " << len << endl;

    char copy1[len];
    strcpy(copy1,name);

    cout <<"Copy String is " << copy1 << endl;

    char fName[] = "Moin ";
    char lName[] = "Zaman";

    strcat(fName, lName);
    cout << fName << endl;

}
