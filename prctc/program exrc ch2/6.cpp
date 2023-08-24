#include<iostream>
using namespace std;
int main()
{
float dol;
float  a=1.487,pou=1,fra=0.172,ger=0.584,jap=0.00955;
	cout<<"Enter value in dollars($):";
	cin>>dol;
	cout<<"pound="<<((pou/a)*dol)<<endl;
	cout<<"franc="<<((fra/a)*dol)<<endl;
	cout<<"duetschemark="<<((ger/a)*dol)<<endl;
	cout<<"yen="<<((jap/a)*dol)<<endl;
	return 0;
}
