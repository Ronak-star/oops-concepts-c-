#include<iostream>
using namespace std;
class hello{
	public:
		int x;
		hello(int a)
		{
			x=a;
		}
		hello(hello &s1)
		{
			x=s1.x;
			cout<<x<<endl;
		}
};
int main()
{
	hello s2(55);
	hello s3(s2);
} 

