#include<iostream>
using namespace std;
class hello{
	public:
		void hi(int a, int b){
			cout<<a+b<<endl;
		}
		void hi(double a, double b){
			cout<<a+b<<endl;
		}
		

};
int main(){
	hello s1;
	s1.hi(10,20);
	s1.hi(10.30,30.20);
}
