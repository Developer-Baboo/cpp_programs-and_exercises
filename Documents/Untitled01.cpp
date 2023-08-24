#include<iostream>
using namespace std;
int main(){
	cout<<endl;
	for(int a=1;a<=10;a++)
	{
		for(int b=10;b>=a;b--)
		{
			cout<<" ";
		}
		for(int c=1;c<=2*a;c++)
		{
			cout<<"*";
		}
		for(int i=40;i>=1;i--)
		{
			cout<<"0 ";
		}
		cout<<endl;
	}
	for(int a=1;a<=11;a++){
	
	cout<<" ";
	
		for(int b=1;b<=20;b++)
		{
			cout<<"0";
		}
		for(int i=1;i<=45;i++)
		if(i>=10 && i<=20)
		{
			cout<<" ";
		}
		else if(i<=35 && i>=30 && a>=3 && a<=9)
		{
		cout<<"  ";	
		}
		else 
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int a=1;a<=1;a++)
	{
		for(int b=1;b<=50;b++)
		{
			cout<<"* ";
		}
	}
}
