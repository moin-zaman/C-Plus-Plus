#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;

    void setValue1(string name, int age)
    {
        this -> name = name;
        this -> age = age;
    }

    void display1()
    {
        cout << "Name " << name << endl;
        cout << "Age " << age << endl;
    }
};

class Student : public Person
{
public:
    int id;

    void setValue2(int id)
    {
        this -> id = id;
    }

    void display2()
    {
        cout << "Id = " << id << endl;
        display1();
    }
};

int main()
{
    Student s1;

    string name;
    int age;
    int id;

    cout << "Please enter your name : ";
    getline(cin, name);

    cout << "Please enter your age : ";
    cin >> age;

    cout << "Please enter your id : ";
    cin >> id;

    s1.setValue1(name, age);
    s1.setValue2(id);



    s1.display1();
    s1.display2();
}
