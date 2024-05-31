#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Please Enter any integer number : ";
    cin >> num;

    int count = 0;
    int temp = num;


    while(temp!=0)
    {
        temp = temp/10;

        count++;


    }

    cout << "Total digits in " << num << " is " << count << endl;
}
