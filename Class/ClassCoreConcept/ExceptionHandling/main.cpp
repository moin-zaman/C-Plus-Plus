#include <iostream>

using namespace std;



int main()
{
    try{

        int num1, num2;
        cout << "Please enter two integer numbers : ";
        cin >> num1 >> num2;

        if(num2==0)
        {
            throw -1;
        }

        double r = (double)num1/num2;

        cout << r << endl;

    }

    catch(int x)
    {
        cout << "Divide by 0 is not possible"<< endl;
        cout << "Please try again" << endl;
    }

    return main();


}
