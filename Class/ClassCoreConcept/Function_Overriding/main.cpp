#include <iostream>

using namespace std;

class Person
{

public:
    void display()
    {
        cout << "I am a Person" << endl;
    }


};

class Student : public Person
{

public:
    int id,age;

    Student(int id , int age){}
    void display()
    {
        cout << id << endl << age << endl;
        cout << "I am a Student" << endl;
    }


};


class Teacher : public Person
{

public:
    void display()
    {
        cout << "I am a Teacher" << endl;
    }


};


//class Student
//{
//public:
//    int id, age;
//    void display()
//    {
//        cout << id << endl << age << endl;
//    }
//};


int main()
{


    Student s1 {s1.id = 101, s1.age = 24};


    s1.display();

}
