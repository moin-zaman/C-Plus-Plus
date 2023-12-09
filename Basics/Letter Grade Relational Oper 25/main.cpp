#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int marks;
    cout << "Please enter your marks to show your grade : ";
    cin >> marks;

    if(!cin.fail())
    {
        if(marks>=50)
        {
            if(marks>=50 && marks<60)
            {
                cout << "You got D" << endl;
            }
            else if(marks>=60 && marks<65)
            {
                cout << "You got D+" << endl;
            }
            else if(marks>=65 && marks<70)
            {
                cout << "You got C" << endl;
            }
            else if(marks>=70 && marks<75)
            {
                cout << "You got C+" << endl;
            }
            else if(marks>=75 && marks<80)
            {
                cout << "You got B" << endl;
            }
            else if(marks>=80 && marks<85)
            {
                cout << "You got B+" << endl;
            }
            else if(marks>=85 && marks<90)
            {
                cout << "You got A" << endl;
            }
            else if(marks>=90 && marks<=100)
            {
                cout << "You got A+" << endl;
            }

        }
        else if(marks<49 && marks>=0)
        {
            cout << "You are fail" << endl;
        }

        else
        {
            cout << "Please enter your marks between 0 to 100" << endl;
        }
    }
    else
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << endl << endl << "Please enter any valid marks !!" << endl;
    }
}
