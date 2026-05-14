#include<iostream>
using namespace std;

class A {
public:
    int a=10, b=20;
};

class B : private A {
public:
    void show() {
        cout << "Hierarchical (B): a+b = " << a+b << endl;
    }
};

class C : private A {
public:
    void show() {
        cout << "Hierarchical (C): a*b = " << a*b << endl;
    }
};

int main() {
    B s2;
    s2.show();

    C s3;
    s3.show();
}

