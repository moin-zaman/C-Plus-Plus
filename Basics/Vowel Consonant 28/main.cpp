#include <iostream>
#include <cctype> // Required for the isalpha function

using namespace std;

int main()
{
//    char ch;
//    cin >> ch;
//
//    //ch = toupper(ch);
//    ch = tolower(ch);
//
//    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//        cout << "Vowel" << endl;
//    }
//    else{
//        cout << "Consonant" << endl;
//    }




//    char ch;
//    cout << "Enter a character: ";
//    cin >> ch;
//
//    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) )
//    {
//        cout << "Alphabet" << endl;
//    }
//    else if((ch >=48 && ch <= 57) || (ch == 45))
//    {
//        cout << "Digit" << endl;
//    }
//    else{
//        cout << "special Character" << endl;
//    }



    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if((ch >='0' && ch <= '9') || (ch=='-'))
    {
        cout << "Digit" << endl;
    }
    else if((ch >='a' && ch <= 'z') || (ch >='A' && ch <= 'Z') )
    {
        cout << "Alphabet" << endl;
    }
    else{
        cout << "Special Character" << endl;
    }


//    char ch;
//    cout << "Enter a character: ";
//    cin >> ch;
//
//    if (isalpha(ch)) {
//        cout << ch << " is an alphabet." << endl;
//    } else {
//        cout << ch << " is not an alphabet." << endl;
//    }


    return main();


}
