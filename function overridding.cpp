#include <iostream>
using namespace std;

class hello
{
public:
    virtual void hi()
    {
        cout << "this is the first para which is virtual" << endl;
    }
};
class hello2 : public hello
{ // function overwrtting
    void hi() override
    {
        cout << "hello" << endl;
    }
};
class hello3 : public hello
{
public:
    void hi() override
    {
        cout << "hello world" << endl;
    }
};

int main()
{
    hello *ptr1 = new hello;
    hello *ptr2 = new hello2;
    hello *ptr3 = new hello3;
    ptr1->hi();
    ptr2->hi();
    ptr3->hi();
}

