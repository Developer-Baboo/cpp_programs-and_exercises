#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Enter the table Number"<<endl;
	cin>>a;
	cout<<"Enter the starting value "<<endl;
	cin>>b;
	cout<<"Enter  the ending value"<<endl;
	cin>>c;
	for (b=b;b>=c;b++)
	cout<<a<<"x"<<b<<"="<<b*a<<endl;
}
