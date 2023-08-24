#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int k,sum;
	
	do{
		cout<<"put the number of elements for array:"<<endl;
	cin>>arr[k];
	for(k=1;k<=5;k++)
	{
		sum=0;
		cout<<"the sum of elements is:"<<arr[k];
		cout<<"the average of elements is:"<<sum/arr[k];
	}
	sum+=arr[k];
}
while(k!=0); 
}
