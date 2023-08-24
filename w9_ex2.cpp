#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<"Enter No. of elements of array:";cin>>i;
	int arr[i];
	int k,loc=1,value;
	for(k=1;k<=i;k++){
		cout<<"Enter element no."<<k<<": ";
		cin>>arr[k];
	}
	value=arr[1];
	for(k=1;k<=i;k++){
		if(value>arr[k]){
			loc=k;
			value=arr[loc];
}		}
		cout<<"The Smallest element is:"<<arr[loc]<<endl;
	
	return 0;
} 

