#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A (Base class)" << endl; // hybride ihheritance
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of B" << endl;
    }
};

class C : public A {
public:
    C() {
        cout << "Constructor of C" << endl;
    }
};

class D : public B, public C { // hierarchical inheritance. + multiple inheritance. =  hybride
public: 
    D() {
        cout << "Constructor of D (Hybrid)" << endl;
    }
};

int main() {
    D obj;   // Creating object of class D
    return 0;
}

