#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<setw(6)<<"4 Table"<<endl;
	for(a=1;a<=10;a++)
	{
		cout<<"4"<<"*"<<a<<"="<<4*a<<endl;
	}
}
