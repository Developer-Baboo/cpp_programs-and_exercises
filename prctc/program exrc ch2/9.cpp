#include<iostream>
using namespace std;
int main()
{
double a,b,c,d;
cout<<"Enter first value:";cin>>a;
cout<<"Enter first value's divider:";cin>>b;	
cout<<"Enter second value:";cin>>c;
cout<<"Enter second value's divider:";cin>>d;
double y,z;
y=(a*d+b*c);
z=(b*d);
cout<<a<<"/"<<b<<"+"<<c<<"/"<<d<<"="<<y<<"/"<<z<<endl;
	return 0;
}
