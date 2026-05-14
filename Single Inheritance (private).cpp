#include<iostream>
using namespace std;

class A {
public:
    int a=10;
};

class B : private A {  // private inheritance
public:
    void show() {
        cout << "Single Inheritance: a = " << a << endl;
    }
};

int main() {
    B s2;
    s2.show();   // ? accessible
    // obj.a; ? not accessible directly
}

