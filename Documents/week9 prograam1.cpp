#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int k;
	cout<<"Ann integer array...."<<endl;
	cout<<"Enter 10 elements in array";
	cout<<endl;
	for(k=0;k<10;k++)
	{
		cout<<"enter arr["<<k<<"]:";
		cin>>arr[k];
	}
		cout<<"the elements in array are :";
		cout<<endl;
		for(k=0;k<=10;k++)
		{
		cout<<"arr["<< k <<"]:"<<arr[k]<<endl;
		}
}

