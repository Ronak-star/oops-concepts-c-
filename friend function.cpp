#include<iostream>
using namespace std;

class hello{
	private:
		int a;
		int b;
		friend void hi(hello);
};
 void hi(hello ss){
 	ss.a = 10;
 	ss.b = 20;
 	cout<<ss.a+ss.b<<endl;
 }
int main(){
	hello s1;
	hi(s1);
	
}

