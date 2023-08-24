#include<iostream>
using namespace std;
int main()
{
	for(int a=1,b=1;a<=100; a=a+b,b=a+b)
	cout<<a<<" "<<b<<" ";
	return 0;
}
