#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    int ch;
    cout << "Please enter the size of char array : ";
    cin >> ch;
    char name[ch];

    cin.clear();
    cin.ignore();

    cout << "Please enter your name : ";
    //cin.getline(name,ch);

    gets(name);

    cout << name << endl;
}
