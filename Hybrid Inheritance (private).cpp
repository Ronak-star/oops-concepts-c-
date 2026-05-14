#include<iostream>
using namespace std;

class A {
public:
    int a=10;
};

class B : private A {
protected:
    int getA() { return a; }
};

class C {
public:
    int c=30;
};

class D : private B, private C {   // hybrid
public:
    void show() {
        cout << "Hybrid Inheritance: a+c = " << getA() + c << endl;
    }
};

int main() {
    D s4;
    s4.show();
}

