#include <iostream>

using namespace std;

class Student
{
    public:
    const int admissionFee;
    const int examFee;
    int id;

    Student(int x, int y, int z)
    : admissionFee(x), examFee(y)
    {
        cout << "Admission Fee is " << admissionFee << endl;
        cout << "Exam Fee is " << examFee << endl;
        id = z;
        cout << "Id is " << id << endl;
    }
};

int main()
{
    Student s1(15000, 2435, 101);

}
