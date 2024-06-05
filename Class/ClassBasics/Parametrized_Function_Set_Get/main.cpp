#include <iostream>

using namespace std;

class Student{

public:
    int id;
    double cgpa;

    void setValue(int x, double y)
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
    Student alim,moin;
    alim.setValue(101, 3.56);
    alim.display();

    moin.setValue(102, 3.76);
    moin.display();

}
