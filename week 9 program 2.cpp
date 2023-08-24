#include<iostream>
using namespace std;
int main() {
	int arr[10];
	int loc=0,large,k;
	for(k=0;k<10;k++) {
		cout<<"Enter element No."<<k+1<<":";
		cin>>arr[k];
	}
	large=arr[4];
	for(k=0;k<10;k++)
	if(large<arr[k]) {
		loc=k;
		large=arr[k];
	}
	cout<<"The Largest element is:"<<arr[loc];
	return 0;
}

