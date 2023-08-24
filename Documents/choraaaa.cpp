#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=15;a++)
	{
	for(int c=17;c>=a-1;c--)
	{
	cout<<" ";
	}
	for(int b=2;b<=a+2;b++)
	{
		cout<<"*";
	}
	for(int x=4;x<=a+2;x++)
	{
		cout<<"*";
	}
	cout<<endl;
}
for(int a=1;a<=10;a++)
{
	cout<<"   ";
	for(int b=1;b<=31;b++)
	if(b>10 && b<=20)
	cout<<" ";
	else
	{
		cout<<"*";
	}
	cout<<endl;
}
for(int a=1;a<=1;a++)
{
	cout<<"   ";
	for(int b=1;b<=31;b++)
	{
		cout<<"*";
	}
}
}
