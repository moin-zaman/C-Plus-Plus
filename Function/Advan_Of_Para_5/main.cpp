#include <iostream>

using namespace std;

void  display(int a, int b)
{
    int sum = a + b;
      cout << "Sum is " << sum << endl;
}



int main()
{
    int n1, n2;
    cout << "Please enter the two ineteger arguments for passing into functions :";
    cin >> n1 >> n2;
    display(n1, n2);

}
