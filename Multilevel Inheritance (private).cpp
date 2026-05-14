#include<iostream>
using namespace std;

class A {
public:
    int a=10;
};

class B : private A {
protected:
    int getA() { return a; }  // helper
};

class C : private B {
public:
    void show() {
        cout << "Multilevel Inheritance: a = " << getA() << endl;
    }
};

int main() {
    C s3;
    s3.show();
}

