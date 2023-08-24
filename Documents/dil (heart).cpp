#include<iostream>
using namespace std;
int main(){
	cout<<endl;
	for(int a=1;a<=5;a++)
	{
		for(int x=1;x<=6;x++)
		{
			cout<<"  ";
		}
		for(int c=1;c<=23;c++)
		if(c>=11 && c<=13 && a==1 || a==2 && c==12)
		{
			cout<<" ";
		}
		else
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a=1;a<=6;a++)
	{
		for(int d=1;d<=5;d++)
		{
			cout<<"  ";
		}
		for(int c=1;c<=a+1;c++)
		{
			cout<<" ";
		}
		for (int b=10;b>=a+1;b--)
		{
			cout<<"*";
		}
		for (int b=10;b>=a+1;b--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
