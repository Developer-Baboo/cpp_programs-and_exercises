#include<iostream>
using namespace std;
int power(int base,int pow){
	int a=1;
	for(int b=1;b<=pow;b++)
	a*=base;
	cout<<a;
}
int main(){
	int base,pow;
	cout<<"Enter base:";cin>>base;
	cout<<"Enter power:";cin>>pow;
	power(base,pow);
	return 0;
}
