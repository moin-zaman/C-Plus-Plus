#include <iostream>

using namespace std;

int main()
{
//    int a[2][2];
//    a[0[0] = 1;
//    a[0[1] = 2;
//    a[1[0] = 3;
//    a[1[1] = 4;


//    int A[3][4] = {
//
//        {1,2,3,4},
//        {10,11,12,13},
//        {20,21,22,23}
//
//
//    };


    int a,b;
    cout << "Please enter the size of row and column in 2D array : ";
    cin >> a >> b;
    int A[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << "A[" << i << "][" << j <<"] : " ;
            cin >> A[i][j];
        }
    }


    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

}
