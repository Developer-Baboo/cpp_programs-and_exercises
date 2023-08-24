#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=10;a++)
	{
		for(int b=10;b>=a;b--)
		{
			cout<<"*";
		}
		for(int c=2;c<=a;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
