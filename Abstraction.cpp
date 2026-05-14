#include<iostream>
using namespace std;
class hello{
	public:
		int a;
		int b;
		
};
int main (){
	hello s1;
	cout<<"Enter the number 1 :"<<endl;
	cin>>s1.a;
	cout<<"Enter the number 2 :"<<endl;
	cin>>s1.b;
	cout<<"The sum a and d is :"<<endl;
	cout<<s1.a+s1.b<<endl;
	
}
