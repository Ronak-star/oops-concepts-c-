#include<iostream>
using namespace std;

class hello{
    public:
     int a=10;
     int b=20;
};
class hello2:public hello{ // multilevel inhheritance
    public:
    int c=30;
    int d=40;

};
class hello3:public hello2{
    public:
    int e=30;
    int f=40;
    void hi()
    {
        cout<<a+b+c+d+e+f<<endl;
    }

};
int main(){
    hello3 s3;
    s3.hi();
}
