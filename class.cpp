#include<iostream>
using namespace std;
class ThisClass {
     public:
     int var;     // data member
     void print() {           // member method
          cout << "Hello";
      }
};
int main (){
	ThisClass s1;
	s1.print();
}
