#include<iostream>
using namespace std;
int main(){
	//cout<<"	";
	for(int rows=10;rows>=1;rows--)
	{
		for(int column=1;column<=rows;column++)
		{
		cout<<"%";
		}
		for(int c=1;c<=1;c++)
		{
			cout<<"*";
		}
		for(int c=10;c>=rows;c--)
		{
			cout<<" ";
		}
		for(int c=10;c>=rows;c--)
		{
			cout<<" ";
		}
		for(int c=1;c<=1;c++)
		{
			cout<<"*";
		}
		for(int column=1;column<=rows;column++)
		{
		cout<<"#";
		}
	cout<<endl;
}
for(int a=1;a<=10;a++){
	for(int b=1;b<=a;b++)
	{
	cout<<"@";	
	}
	for(int u=1;u<=1;u++)
		{
			cout<<"*";
		}
	for(int z=10;z>=a;z--)
	{
		cout<<" ";
	}
	 for(int z=10;z>=a;z--)
	{
		cout<<" ";
	}
	for(int u=1;u<=1;u++)
		{
			cout<<"*";
		}
	for(int b=1;b<=a;b++)
	{
	cout<<"@";	
	}
cout<<endl;
}
	return 0;
}
