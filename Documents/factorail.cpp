#include<iostream>
#include<cmath>
using namespace std;
int main(){
	unsigned int a;
	unsigned long fact=1;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	for(int b=a;b>0;b--)
	fact *= b;
	cout<<"Factorial is "<<endl<<fact<<endl;
}
