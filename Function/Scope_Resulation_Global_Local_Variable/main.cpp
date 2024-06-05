#include <iostream>

using namespace std;

int x = 10;
int y = 50;

int main()
{
   int x = 20;
   cout << "Local : " << x << endl;

   cout << "Global : " << ::x  << endl;

   ::x = 30;

   cout << "Modify Global : " << ::x << endl;

   cout << "Local Y : " << y << endl;
}
