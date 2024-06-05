#include <iostream>

using namespace std;

class student
{
public:
    int id;
    double cgpa;

    student(int x, double y)
    {
        id = x;
        cgpa = y;
    }

    void display()
    {
        cout << "id = " << id << endl << "cgpa = " << cgpa << endl;
    }
    student()
    {
        cout << "Default Constructor" << endl;
    }
};

int main()
{
    student m;
    student alim(101,3.56);
    alim.display();

}
