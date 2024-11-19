#include <iostream>

using namespace std;

void swap(int *n1,int *n2)
{

    int temp;
    temp = *(n1);
    *(n1) = *(n2);
    *(n2) = temp;

}

int main()
{
    int num1 = 5, num2 = 6;
    cout << "Num1 = " << num1 << endl << "Num2 = " << num2 << endl;

    swap(&num1, &num2);
    cout << "Num1 = " << num1 << endl << "Num2 = " << num2 << endl;

}

