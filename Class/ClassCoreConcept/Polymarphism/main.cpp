#include <iostream>

using namespace std;

class Person
{
public:

    virtual void display()
    {
        cout << "I m a Person" << endl;
    }
};

class Student : public Person
{
public:

    void display()
    {
        cout << "I m a Student" << endl;
    }
};

class Teacher : public Person
{
public:

    void display()
    {
        cout << "I m a Teacher" << endl;
    }
};

int main()
{
    Person *p;
    Student s;
    Teacher t;

    p = &s;
    p -> display();

    p = &t;
    p -> display();

    Person pp;
    pp.display();

}
