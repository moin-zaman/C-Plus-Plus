#include <iostream>

using namespace std;

int main()
{
    //char name [13] = "Moin Zaman";
    //cout << name << endl;

    int a;
    cout << "Please enter the size of a character array : ";
    cin >> a;

    cin.ignore(); // Ignoring New Line Character;

    char n [a];

    cin.getline(n,a);  // Read Until Newline Character or Null Character'

    cout  << n << endl;
}
