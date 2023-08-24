#include<iostream>
using namespace std;
int main() {
	for(int a=1;a<=7;a++)
	{
		for(int t=1;t<=16;t++)
		{
			cout<<"  ";
		}
		for(int b=7;b>=a;b--)
		{
			cout<<"*";
		}
			for(int c=2;c<=a;c++)
			{
				cout<<" ";
			}
		for(int c=1;c<=a;c++)
			{
				cout<<" ";
			}
			
			{
				for(int j=7;j>=a;j--)
				cout<<"*";
			}
		cout<<endl;
		}
		for(int a=1;a<=7;a++)
	{
		for(int t=1;t<=16;t++)
		{
			cout<<"  ";
		}
		for(int b=1;b<=a;b++)
		{
			cout<<"*";
		}
			for(int c=7;c>=a;c--)
			
			{
				cout<<" ";
			}
		for(int c=7;c>=a+1;c--)
			{
				cout<<" ";
			}
			
			{
				for(int j=1;j<=a;j++)
				cout<<"*";
			}
		cout<<endl;
		}
	}
