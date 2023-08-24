#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"\nEnter two numbers : ";
	cin>>a>>b;
	temp=a; 
	a=b;
	b=temp;
	cout<<"\nAfter swapping numbers are : ";
	cout<<a<<" "<<b;
	return 0;
}
