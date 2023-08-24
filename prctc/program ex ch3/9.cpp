#include<iostream>
using namespace std;
int main(){
	int a,b;//nCr
	unsigned long d=1;
	cout<<"Enter Number of guests:";cin>>a;
	cout<<"Enter Number of chair:";cin>>b;
	for(int c=a;c>=((a-b)+1);c--)
	d*=c;
	cout<<"Number of possible arrangements="<<d;
	return 0;
}
