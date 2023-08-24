#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	float n;
	cout<<"Enter the table Number"<<endl;
	cin>>a;
	cout<<"Enter the starting value "<<endl;
	cin>>b;
	cout<<"Enter  the ending value"<<endl;
	cin>>c;
	for (n=b;n>=c;b++)
	cout<<a<<"x"<<n<<"="<<n*a<<endl;
}
