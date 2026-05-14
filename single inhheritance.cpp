#include<iostream>
using namespace std;

class hello{
    public:
     int a=10;
     int b=20;
};
class hello2:public hello{ // single inhheritance
    public:
    int c=30;
    int d=40;
    
    
  void hi(){
  	cout<<a+b+c+d<<endl;
  }
};

int main(){
    hello2 s2;
    s2.hi();
}
