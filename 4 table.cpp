#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cout<<setw(15)<<"4th Table"<<endl;
	for (a=1;a<=10;++a)
	cout<<setw(7)<<4<<"X"<<a<<"="<<4*a<<endl;
	return 0;
}
