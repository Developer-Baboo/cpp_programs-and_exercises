#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	do
	{
	int a;
	cout<<"\nEnter number of Values:";cin>>a;
	int num[a];
	int b;
	cout<<"Enter number of operators:";cin>>b;
	char oprtr[b];
	int x;
	for(x=1;x<=a;x++)
	{
		cout<<"Enter Value number "<<x<<":";cin>>num[x];
		cout<<"Enter operator number "<<x<<":";cin>>oprtr[x];
	}
	for(x=1;x<=a;x++)
	{
	cout<<num[x]<<oprtr[x];
	}
	int z=num[1];
	for(x=1;x<=a;x++)
	{
		z=(float)z; 
		if(oprtr[x]=='+')
		z+=num[x+1];
		else if(oprtr[x]=='-')
		z-=num[x+1];
		else if(oprtr[x]=='*')
		z*=num[x+1];
		else if(oprtr[x]=='/')
		z/=num[x+1];
		else if(oprtr[x]=='%')
		z%=num[x+1];
		else if(oprtr[x]=='=')
		z=z;
	}
	cout<<z;
	ch=getch();
	}
	while(ch=='\r');
	return 0;
}
