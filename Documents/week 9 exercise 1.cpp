#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int k,sum=0;
	for(int k=0;k<=5;k++)
	cout<<"enter elements for array["<<k<<"]:";
	
	cin>>arr[k];	
	cout<<endl;
	sum+=arr[k];
	cout<<"Sum="<<sum;
	cout<<"The average is:"<<arr[k]/k;
	return 0;
}
