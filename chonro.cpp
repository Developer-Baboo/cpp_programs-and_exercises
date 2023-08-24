#include<iostream>
using namespace std;
int main() {
	for(int a=1;a<=10;a++)
	{
		for(int b=10;b>=a;b--)
		{
			cout<<" ";
		}
		for(int c=1;c<=a;c++)
		{
			cout<<"*";
		}
		for(int c=2;c<=a;c++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	for(int a=1;a<=10;a++)
	{
		for(int b=1;b<=10;b++)
		{
			cout<<"*";
		}
		for(int b=1;b<=10;b++)
		{
			cout<<"*";
		}
		if(a>=5 && a<=10)
		{
			cout<<" ";
		}
		 else if (b>=4 && b<=6)
		{
			cout<<" ";
		}
		cout<<endl;
	}
}
