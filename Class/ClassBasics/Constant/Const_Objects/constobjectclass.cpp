#include "constobjectclass.h"
#include <iostream>
using namespace std;

void ConstObjectClass :: display1() const
{
    cout << "I am constant Function" << endl;
}

void ConstObjectClass :: display()
{
    cout << "I am non Constant Function" << endl;
}
