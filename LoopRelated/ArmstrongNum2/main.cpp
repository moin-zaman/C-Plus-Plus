#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Please enter two Integer numbers : ";
    cin >> num1 >> num2;

    int r, arms = 0;

    for (int i = num1; i <= num2; i++)
    {
        int temp = i;
         while(temp!=0)
        {
            r = temp%10;
            r = r*r*r;
            arms = arms+r;
            temp = temp/10;
        }
            if(arms == i)
            {
                cout << i << " is a Armstrong number" << endl;

            }

            arms = 0;



    }

}
