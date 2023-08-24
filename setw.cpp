#include<iostream>		// for cout
#include<iomanip>		// for setw
using namespace std;
int main()
{
	int a=1,b=2,c=3,d=4,e=5;
	int f=12,g=34,h=105,i=56,j=67;
	cout<<setw(15)<<"SWE-2K19"<<endl;
	cout<<"SNO"<<setw(5)<<cout<<"Name"<<setw(10)<<cout<<"Roll No"<<endl
	<<a<<setw(5)<<cout<<"Rajesh"<<setw(10)<<f<<endl
	<<b<<setw(5)<<cout<<"Suhail"<<setw(10)<<g<<endl
	<<c<<setw(5)<<cout<<"Baboo"<<setw(10)<<h<<endl
	<<d<<setw(5)<<cout<<"Ashesh"<<setw(10)<<i<<endl
	<<e<<setw(5)<<cout<<"Rajveer"<<setw(10)<<j<<endl;
	return 0;
}
