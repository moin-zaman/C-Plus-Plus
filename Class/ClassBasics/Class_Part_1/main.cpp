#include <iostream>

using namespace std;

class Student{

public:
    int id;
    double cgpa;

};

int main()
{
    Student Alim;

    Alim.id = 101;
    Alim.cgpa = 3.56;

    cout << "Alim : id = " << Alim.id << ", cgpa = " << Alim.cgpa << endl;

    Student Moin {Moin.id = 102, Moin. cgpa = 3.54};
    cout << "Moin : id = " << Moin.id << ", cgpa = " << Moin.cgpa << endl;

    Student Zaman, Khan;

}
