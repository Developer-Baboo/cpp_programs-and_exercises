#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int n;
	cout<<"Enter table number";cin>>a;
	cout<<"Enter starting value of table";cin>>b;
	cout<<"Enter ending value of table";cin>>c;
	for(n=b; n<=c;n++)
	cout<<a<<"x"<<n<<"="<<a*n<<endl;
	return 0;
}
