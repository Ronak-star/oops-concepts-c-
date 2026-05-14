#include<iostream>
using namespace std;
class hello{
	public:
		int a = 10;
		int b = 20;
		void hi(){
			cout<<a+b<<endl;
			cout<<"This is a member function "<<endl;
			
		}
};
int main (){
	hello s1;
	cout<<s1.a+s1.b<<endl;
	s1.hi(); 
}
