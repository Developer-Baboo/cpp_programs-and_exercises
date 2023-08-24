#include<iostream>
using namespace std;
int main()
{char ch=156;
float pou,sh,pen;
	cout<<"Enter pounds:";
	cin>>pou;
	cout<<"Enter shillings:";
	cin>>sh;
	cout<<"Enter pence:";
	cin>>pen;
	float ans=pou+sh/20+pen/240;
	cout<<"Decimal pounds="<<ch<<ans<<endl;	
	
	return 0;
}
