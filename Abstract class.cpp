#include <iostream>
using namespace std;

// Abstract class 
class hello
{
public:
    virtual void hi()=0; //pure virtual function void hi() = 0;
 
};
class hello2 : public hello
{ // function overriding
public:
    void hi() override
    {
        cout << "this is a pure virtual function using abstract class" << endl;
    }
};
int main()
{
  hello *ptr;
  hello2 s2;
  ptr=&s2;
  ptr->hi();
    return 0;
}

