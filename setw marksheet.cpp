#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=11,b=25,c=34,d=42,e=234;
	int f=1,g=2,h=3,i=4,j=5;
	cout<<setw(30)<<"SWE-2K19"<<endl;
	cout<<"SNO"<<"Name"<<"Fathers name"<<"Roll no"<<endl
	<<f<<setw(15)<<"Rajveer"<<setw(15)<<"Kewal"<<setw(15)<<"a"<<endl
	<<g<<setw(15)<<"Baboo"<<setw(15)<<"Mehandro"<<setw(15)<<"b"<<endl
	<<h<<setw(15)<<"Rajesh"<<setw(15)<<"Akash"<<setw(15)<<"c"<<endl
	<<i<<setw(15)<<"Ashesh"<<setw(15)<<"Mevo"<<setw(15)<<"d"<<endl
	<<j<<setw(15)<<"Suhail"<<setw(15)<<"Kanji"<<setw(15)<<"e"<<endl;
	return 0;
}
