#include "separatefileclass.h"
#include <iostream>
using namespace std;

SeparateFileClass::SeparateFileClass()
{
    cout << "Default constructor" << endl;
}

SeparateFileClass::SeparateFileClass(int x, double y)
{
    id = x;
    cgpa = y;
}

void SeparateFileClass::display()
{
    cout << "id = " << id << endl << "cgpa = " << cgpa << endl;
}
