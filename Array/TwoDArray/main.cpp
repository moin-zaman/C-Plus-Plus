#include <iostream>
#include <cstring>


using namespace std;

int main()
{

//    int a[2][2];
//    a[0[0] = 1;
//    a[0[1] = 2;
//    a[1[0] = 3;
//    a[1[1] = 4;
//
//
//    int A[3][4] = {
//
//        {1,2,3,4},
//        {10,11,12,13},
//        {20,21,22,23}
//
//
//    };

    int x, y;
    cout << "Enter the Size of the row and column of 2D Array : ";
    cin >> x >> y;

    int arr[x][y];

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    cout << "Elements of 2D Array" << endl;

    cout << "arr[" << x << "][" << y << "] = {";

    for(int i = 0; i < x; i++)
    {
        cout << "{ ";

        for(int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "}," << endl;;
    }
    cout << "}";



}
