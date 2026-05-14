#include <iostream>
using namespace std;
// virtula base class
class A {
public:
    int a;   
    A() {
        cout<<"The value of a is : a = ";
        a = 10;  
    }
};

class B : virtual public A {  
    public:

};

class C : virtual public A {
      public:
};

class D : public B, public C { 
      public:
};

int main() {
    D s1;
    cout << s1.a << endl;  
    return 0;
}

