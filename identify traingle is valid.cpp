#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"Enter value of angles:";		cin>>a>>b>>c;
	int Sum = a+b+c;
	cout<<Sum;
	if(Sum==180)
	{
		cout<<"Triangle is valid";
	}
	else
	{
		cout<<"traingle is invalid";
	}
	return 0;
}
