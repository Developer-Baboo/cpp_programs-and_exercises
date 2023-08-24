#include<iostream>
using namespace std;
int main() {
	int arr[10];
	int loc=0,small,k;
	for(k=0;k<10;k++) {
		cout<<"Enter element No."<<k+1<<":	";
		cin>>arr[k];
	}
	small=arr[10];
	for(k=10;k>0;k--)
	if(small<arr[k]) {
		loc=k;
		small=arr[k];
	}
	cout<<"The smallest element is:"<<arr[loc];
	return 0;
}

