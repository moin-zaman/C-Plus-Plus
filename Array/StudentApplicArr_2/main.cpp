#include <iostream>
#include <cstring>


using namespace std;

int main()
{

    int n;
    cout << "Enter the Size of an Student  array : ";
    cin >> n;

    int stdArr[n];


    for(int i = 0; i < n; i++)
    {
        cout << "stdArr[" << i << "] = ";
        cin >> stdArr[i];
    }

    cout << "So Marks of Student" << endl;

    cout << "stdArr[" << n << "] = {";

    for(int i = 0; i < n; i++)
    {
        cout << stdArr[i] << " ";
    }
    cout << "}" << endl;

    int total = 0;

    for(int i = 0; i < n; i++)
    {
        total = total + stdArr[i];
    }

    cout << "Total Marks of Student = " << total << endl;

    double avg = (double) total / n;

    cout << "Average Marks of Student = " << avg << endl;

    int max = stdArr[0];
    int min = stdArr[0];

    for(int i = 1; i < n; i++)
    {
        if(max < stdArr[i])
        {
            max = stdArr[i];
        }
        if(min > stdArr[i])
        {
            min = stdArr[i];
        }
    }

    cout << "Maximum Mark is " << max << endl;
    cout << "Minimum Mark is " << min << endl;

    int findValue;
    cout << "Please enter the value you want to search into the array : ";
    cin >> findValue;

    int count = -1;

    for(int i = 0; i < n; i++)
    {
        if(findValue == stdArr[i])
        {
            count = i;
        }
    }

    if(count == -1)
    {
        cout << findValue << " is not available into the array" << endl;

    }
    else
    {
        cout << "The index of " << findValue << " is = " << count << endl;
    }



}
