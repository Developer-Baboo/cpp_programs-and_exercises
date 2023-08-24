#include<iostream>
using namespace std;
int main() {
	int a=8,b=4,c;
	a+=++b;
	b+=--a;
	c=(a>b?b:a);
	cout<<(a&&c);
	c = a+c;
	b= (c<a?--b:++b/3);
	cout<<b<<a<<c;
	
}
