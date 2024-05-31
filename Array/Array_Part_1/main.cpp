#include <iostream>

using namespace std;

int main()
{
//    int marks[5];
//    marks[0] = 1;
//    marks[1] = 2;
//    marks[2] = 3;
//    marks[3] = 4;
//    marks[4] = 5;

//    int marks[5] = {1,2,3,4,5};


//    int marks[] = {1,2,3,4,5};


    int n;
    cout << "Enter the Size of an array : ";
    cin >> n;

    int marks[n];

    cout << "Please enter the value of array : " << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "marks" << "[" << i << "]" << " = ";
        cin >> marks[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }
}
