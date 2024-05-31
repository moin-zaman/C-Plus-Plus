#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Please enter three numbers : ";
    cin >> num1 >> num2 >> num3;

    int max = (num1 > num2) ? (num1 >  num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    cout << max << " is a greater number" << endl;


}
