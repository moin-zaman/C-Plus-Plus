#include <iostream>

using namespace std;

class Student
{
    public:
    Student()
    {
        cout << "Default Constructor" << endl;
    }

    void display()
    {
        cout << "Display Function" << endl;
    }

    ~Student()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    Student ob;
    ob.display();

    Student ab;
    ab.display();

    Student c,d,e;

    //For Each Object Destructor will be called

}
