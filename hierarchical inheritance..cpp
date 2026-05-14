#include<iostream>
using namespace std;

class hello {
public:
    hello() {
        cout << "Parent class constructor" << endl; // hierrical inhheitance
    }
};

class hello2 : public hello {
public:
    hello2() {
        cout << "Child class hello2 constructor" << endl;
    }
};

class hello3 : public hello {
public:
    hello3() {
        cout << "Child class hello3 constructor" << endl;
    }
};

int main() {
  //  cout << "Creating object of hello2:" << endl;
    hello2 s2;

  //  cout << "\nCreating object of hello3:" << endl;
    hello3 s3;

    return 0;
}

