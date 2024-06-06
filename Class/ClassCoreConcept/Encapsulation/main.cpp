#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Student
{
    private:
        string name;

    public:
        void setName(string x)
        {
            name = x;
        }

        string getName()
        {
            return name;
        }
};

int main()
{
    string x;
    cout << "Please enter your name : ";
    getline(cin,x);

    Student ob;
    ob.setName(x);
    string name = ob.getName();
    cout << "My name is " << name << endl;

}
