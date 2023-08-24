#include<iostream>
using namespace std;
int main{
	int a,b,c;
for (a=1;a<=6;a++)
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=b;c+=2)
		{
			cout<<"*";
		}
		cout<<"<";
			}
			cout<<endl;
}
