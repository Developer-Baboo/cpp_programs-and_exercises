#include<iostream>
using namespace std;
int main() {
	int arr[10];
	int k;
	cout<<"An Integer array ..."<<endl;
	cout<<"Enter 10 elements in array";
	cout<<endl;
	for(k=0;k<10;k++) {
		cout<<"Enter arr[ "<<k<<" ]:";
		cin>>arr[k];
	}
	cout<<"The elements in array are:";
	cout<<endl;
	for(k=0;k<10;k++)
	cout<<"Enter arr[ "<<k<<" ]:"<<arr[k]<<endl;
	return 0;	
}
