#include<iostream>
using namespace std;
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=4;b>=a;b--)
		cout<<" ";
		for(b=1;b<=a;b++)
		cout<<"*";
		for(b=2;b<=a;b++)
		cout<<"*";
		for(b=5;b>=a;b--)
		cout<<"\\";
		for(b=1;b<=9;b++)
	    cout<<"\\";
		for(b=1;b<=a;b++)
		cout<<"\\";
	
	cout<<endl;
	}
	
	for(a=1;a<=12;a++){
		for(b=1;b<=9;b++)
		cout<<"-";
		for(b=1;b<=5;b++)
		cout<<"|";
		for(b=1;b<=7;b++){
		if(a==4||a==5||a==6||a==7||a==8)
		cout<<"-";
		else 
		cout<<"|";
		}
		for(b=1;b<=3;b++)
		cout<<"|";
	    
	cout<<endl;}
	return 0;
}
