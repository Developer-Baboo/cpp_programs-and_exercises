#include<iostream>
using namespace std;
int main() {
	for(int a=1;a<=6;a++)
	{
		for(int b=5;b>=a;b--)
		cout<<" ";
		for(int b=1;b<=a;b++)
		cout<<"*";
		for(int b=2;b<=a;b++)
		cout<<"*";		
cout<<endl;	}
	
}
