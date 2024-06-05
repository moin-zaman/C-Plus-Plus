#include <iostream>
#include "constobjectclass.h"

using namespace std;



int main()
{
    const ConstObjectClass obj;
    obj.display1();

    //obj.display(); error ...  const obj can not call non const func

    ConstObjectClass ob;
    ob.display();

    ob .display1(); // non const obj can also call const func
}
