#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=5;a++)
	{
		for(int b=1;b<=(2*a-1);b++)
		{
			cout<<" ";
		}
		for(int c=5;c>=a;c--)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
