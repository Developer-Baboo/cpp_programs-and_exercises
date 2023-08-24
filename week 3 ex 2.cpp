#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	int c = a+b;
	cout<<"45+35="<<c<<endl;
	int d = a-b;
	cout<<"45-35="<<d<<endl;
	int e = a*b;
	cout<<"45*35="<<e<<endl;
	float f = (float)a/b;
	cout<<"45/35="<<f<<endl;
	int g = a%b;
	cout<<"45%35="<<g<<endl;
	return 0;
}
