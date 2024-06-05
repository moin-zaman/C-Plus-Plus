#include <iostream>

using namespace std;

class Student{

public:
    int id;
    double cgpa;

    Student(int x, double y)
    {
        id = x;
        cgpa = y;
    }

    void display()
    {
        cout << "id = " << id << ", cgpa = " << cgpa << endl;
    }

};

int main()
{
    Student alim(101,3.56), moin(102, 3.87);
    alim.display();


    //Student moin(102, 3.78);
    moin.display();

}
