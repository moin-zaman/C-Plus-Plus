#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int a = 5, b = 7;

    bool c = a > b;

    cout << "Boolean value inform of integer : " << c << endl;
    cout << boolalpha << c << endl;

    // Positive Negative Numbers

    int num;
    cout << "Please enter any number : ";
    cin >> num;


    //if(cin >> num)

    if(!cin.fail())
    {
        if( num > 0 )
        {
            cout << "Positive number" << endl;
        }
        else if( num < 0 )
        {
            cout << "Negative number" << endl;
        }
        else
        {
            cout << "Zero" << endl;
        }

    }else{
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<< "Please enter any valid numeric value" << endl;
    }

//    int num;
//
//    cout << "Please enter a number: ";
//
//    if (cin >> num) {
//        // Input is a valid integer
//        cout << "You entered: " << num << endl;
//    } else {
//        // Input is not a valid integer
//        cout << "Invalid input. Please enter a number." << endl;
//
//        // Clear the fail state and ignore invalid input
//        //cin.clear();
//        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    }

    return 0;

}
