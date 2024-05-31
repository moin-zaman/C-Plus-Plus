#include <iostream>

using namespace std;

int main()
{
    int digit;
    cout << "Please enter any digit : ";
    cin >> digit;

    switch(digit)
    {
    case 0:
        cout << "Zero" << endl;
        break;

    case 1:
        cout << "One" << endl;
        break;

    case 2:
        cout << "Two" << endl;
        break;

    case 3:
        cout << "Three" << endl;
        break;

    case 4:
        cout << "Four" << endl;
        break;

    case 5:
        cout << "Five" << endl;
        break;

    default:
        cout << "Not a Digit" << endl;
    }

    char ch;
    cout << "Please enter any character :";
    cin >> ch;

    ch = tolower(ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
         cout << "Vowel" << endl;
         break;

    default:
        cout << "Consonant" << endl;
    }

}
