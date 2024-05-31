#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of an student arr : ";
    cin >> n;

    int stdArr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the marks of std [" << i+1 << "] : ";
        cin >> stdArr[i];
    }

    cout << "Marks of Student : ";

    for(int i = 0; i < n; i++)
    {
        cout << stdArr[i] << " ";
    }
    cout << endl << endl;

    int total = 0;

    for(int i = 0; i < n; i++)
    {
        total = total+stdArr[i];
    }

    cout << "Total marks is : " << total << endl;
    double avg = (double)total/n;
    cout << "Average is : " << avg << endl << endl;

    int max = stdArr[0];
    int min = stdArr[0];

//    for(int i = 1; i < n; i++)
//    {
//        if(max < stdArr[i])
//        {
//            max = stdArr[i];
//        }
//    }
//
//    cout << "Maximum marks is : " << max << endl;
//
//
//    for(int i = 1; i < n; i++)
//    {
//        if(min > stdArr[i])
//        {
//            min = stdArr[i];
//        }
//    }
//
//    cout << "Minimum marks is : " << min << endl;



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

    cout << "Maximum marks is : " << max << endl;
    cout << "Minimum marks is : " << min << endl;


}
