#include <iostream>

using namespace std;

class Student{

public:
    int id;
    double cgpa;

    void display()
    {
        cout << "id = " << id << ", cgpa = " << cgpa << endl;
    }

};

int main()
{
    Student Alim;

    Alim.id = 101;
    Alim.cgpa = 3.56;
    Alim.display();



    Student Moin {Moin.id = 102, Moin. cgpa = 3.54};
    Moin.display();

    Student Zaman, Khan;


}
