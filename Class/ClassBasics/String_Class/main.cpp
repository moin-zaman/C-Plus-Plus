#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Moin";
    string str2 = "Zaman";

    string fName = str1;
    cout << fName << endl;

    string str3;

    str3 = str1 + " " + str2;

    cout << str3 << endl;

    int size  = str3.size();
    cout << size << endl;
}
