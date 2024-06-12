#include <iostream>

using namespace std;

class C
{
public:
    int age;
    int height;
};

class D
{
public:

    void display(C obj)
    {
        cout << obj.age << endl;
        cout << obj.height << endl;
    }
};

int main()
{
    C ob;
    ob.age = 101;
    ob.height = 6;

    D obj;

    obj.display(ob);
}
