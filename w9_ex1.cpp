#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<"No. of elements of array:"; cin>>i;
	float a[i];
	float sum=0;
	for(int b=1;b<=i;b++){
		cout<<"Enter value of["<<b<<"]:";cin>>a[b];
	}
	for(int b=1;b<=i;b++){
	sum+=a[b];
}
	cout<<"Sum of element of arrays:"<<sum<<endl;
	cout<<"Average of element of arrays:"<<sum/i;
	return 0;

}
