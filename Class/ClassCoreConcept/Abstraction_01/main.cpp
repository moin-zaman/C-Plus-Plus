#include <iostream>

using namespace std;

class MobileUser
{
public:
    void call()
    {
        cout << "hello" << endl;
    }
    virtual void sendMessage() = 0;
};


class Rahim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hello This is Mr. Rahim" << endl;
    }
};


class Karim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hello This is Mr. Karim" << endl;
    }
};

int main()
{
    MobileUser *p;

    Rahim r;
    Karim k;

    p = &r;
    p -> sendMessage();
    //p -> call();
    r.call();

    p = &k;
    p -> sendMessage();
    //p -> call();
    k.call();
}
