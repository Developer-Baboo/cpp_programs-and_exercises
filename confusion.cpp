#include<iostream>
using namespace std;
int main() {
	int a=2,b=3,c=4,d=5,e=6,f=7;
	a=++b;
	b=++d;
	c=++a;
	d=++e;
	int X=(a+c)+(a+b+c+d)-c;
	cout<<X;
}
