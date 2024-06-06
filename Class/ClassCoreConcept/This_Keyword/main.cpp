#include <iostream>

using namespace std;

class Student
{
public:
    string name;

    Student(string name)
    {
        this -> name = name;
    }

    void display()
    {
        cout << "My name is " << name << endl;
    }
};

int main()
{
    string name;
    cout << "Please enter your name : ";
    getline(cin,name);

    Student ob(name);
    ob.display();
}
