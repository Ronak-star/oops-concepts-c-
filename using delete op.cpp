#include<iostream>
using namespace std;
int main(){
	int *arr = new int[10];
	for (int i=0; i<=2; i++){
		cout<<"Enter the number of Employee ID :-"<<endl;
		cin>>arr[i];
	}
	for(int i=0; i<=2; i++){
		cout<<"Employee Id is :- "<<arr[i]<<endl;
	}
	delete[] arr;
	for(int i=0; i<=2; i++){
		cout<<" For deallocation "<<arr[i]<<endl;
	}
}
