#include <iostream>

using namespace std;

class Student
{
public:
    int id; double cgpa;

    void display(Student obj)
    {
        cout << "Id = " << obj.id << endl;
        cout << "cgpa = " << obj.cgpa << endl;
    }

};

int main()
{
    Student s1;

    s1.id = 101;
    s1.cgpa = 3.56;
    s1.display(s1);
}
