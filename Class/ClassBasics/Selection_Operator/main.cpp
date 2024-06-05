#include <iostream>

using namespace std;

class Student
{
    public:
    void display()
    {
        cout << "Display Function is called" << endl;
    }
};

int main()
{
    Student ob;
    //Student *p = &ob;

    Student *p;
    p = &ob;

    p -> display();
}
