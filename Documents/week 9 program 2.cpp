#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int loc=0,large,k;
	for(k=0;k<10;k++)
	{
		cout<<"enter elements no."<< k+1 <<": ";
		cin>>arr[k];
	}
	//large=arr[0];
		//for(k=0;k<10;k++)
		if (large < arr[k] ){
		loc=k;
		large =arr[k];
		cout<<"\nthe largest elements is::"<<arr[loc];
		}
	}


