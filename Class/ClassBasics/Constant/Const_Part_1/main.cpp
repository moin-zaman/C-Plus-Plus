#include <iostream>

using namespace std;

int main()
{
    const int x = 20;

    // x = 30; error.... we can not modify const variable

    cout << " const x is " << x << endl;

    //const int y; error... when we declare the const variable we have to initialize at that time otherwise it will show error;
}
