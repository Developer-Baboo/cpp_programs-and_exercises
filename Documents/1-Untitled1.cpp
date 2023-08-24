#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=10;a++)
	{
	for(int b=10;b>=a;b--)
	{
	cout<<"<";	
	}
	for(int c=1;c<=2*a-1;c++)
	{
		cout<<"*";
	}
//	for(int d=2;d<=a;d++)
//	{
//		cout<<" ";
//	}
	for(int e=10;e>=a;e--)
	{
		cout<<">";
	}
	
	cout<<endl;
	}
	for(int a=1;a<=10;a++)
	{
		for(int b=1;b<=a;b++)
		{
		cout<<"<";	
		}
		for(int c=10;c>=a;c--)
		{
			cout<<"*";
		}
		for(int s=9;s>=a;s--)
		{
			cout<<"*";
		}
		for(int d=1;d<=a;d++)
		{
			cout<<">";
		}
		cout<<endl;
	}
}
