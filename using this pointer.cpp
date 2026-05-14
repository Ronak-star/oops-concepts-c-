#include<iostream>
using namespace std;

class hello{
	public:
		int a;
		hello(int a){
			this->a=a;
		}
		void display(){
			cout<<a<<endl;
		}
};
int main (){
	hello s1(10);
	s1.display();
}
