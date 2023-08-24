#include<iostream>
using namespace std;
int main() {
	void order (int&,int&);		// prototype
	int n1=99,	n2=11;
	int n3=22,n4=88;
	order (n1,n2);
	order (n3,n4);
	cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
	cout<<"n3="<<n3<<endl<<"n4="<<n4<<endl;
	return 0;
}
