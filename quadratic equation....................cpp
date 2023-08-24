#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a,b,c;
	cout<<"Value of a=";		cin>>a;
	cout<<"Value of b=";		cin>>b;
	cout<<"Value of c=";		cin>>c;
	float f = (pow(b,2)-4*a*c);
	float g=(sqrt(f));
	float h=(2*a);
	float x1=(-b-g)/h;
	float x2=(-b+g)/h;
	char ch1=253;	// square 
	char ch2=241;	// plus minus
	char ch3=251;	// square root
	cout<<endl
	<<"X="<<"-b"<<ch2<<ch3<<"b"<<ch1<<'-'<<"4ac"<<'/'<<"2a"<<endl
	<<endl
	<<endl
	<<"x1="<<x2<<"\t\t\tor\t"<<"x2="<<x2<<endl<<endl;
	return 0;
}
