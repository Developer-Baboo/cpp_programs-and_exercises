#include<iostream>
using namespace std;
int main() {
	char o;
	int a,b;
	cout<<"Enter operators(+,-,/,*):";		cin>>o;
	cout<<"Enter first number:";		cin>>a;
	cout<<"Enter second number:";		cin>>b;
	switch(o)
	{
		case'+':
			cout<<a<<"+"<<b<<"="<<a+b;
			break;
		case'*':
		cout<<a<<"*"<<b<<"="<<a*b;
		break;
		case'/':
		cout<<a<<""<<b<<"="<<a/b;
		break;
		case'-':
		cout<<a<<"-"<<b<<"="<<a-b;
		break;
		default:
		cout<<"Sorry this opertor doesn't match(-,*,/,+)";
		break;
	}
	
		return 0;
}
