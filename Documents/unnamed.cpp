#include<iostream>
using namespace std;
int main(){
	int a,b,c,n;
	cout<<"enter table number"<<endl;
	cin>>a;
		cout<<"enter starting value"<<endl;
	cin>>b;
		cout<<"enter ending value"<<endl;
	cin>>c;
	for(n=b;n<=c;n++)
	cout<<a<<"x"<<b<<"="<<n*a<<endl;
}


