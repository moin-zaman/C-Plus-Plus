#include <iostream>

using namespace std;

int factRecursion(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else{
        return n*factRecursion(n-1);
    }
}


int main()
{
   int n;
   cout << "Please enter any number : ";
   cin >> n;
   int fact = factRecursion(n);
   cout << "Fact of " << n << " is " << fact << endl;
}
