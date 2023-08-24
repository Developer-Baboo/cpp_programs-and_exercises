#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int temp;
	while(b!=0)
	{
		temp = a*b;
		a = b;
		b = temp;
	}
	return(a);
}
int main() {
	int x =15, y=25;
	cout<<gcd(x,y);
	return 0;
}
