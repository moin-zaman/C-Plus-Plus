#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

class A
{
private:
    int id;
    string name;

public:
    void set(int id, string name)
    {
        this -> id = id;
        this -> name = name;
    }

public:
    friend class B;
};

class B
{
public:

    void display(A ob)
    {
        cout << ob.id << endl;
        cout << ob.name << endl;
    }

};


int main()
{
    A ob1;
    B ob2;


//    ob2.display(ob1);


    ob1.set(101,"Moin Zaman");

    ob2.display(ob1);

}
