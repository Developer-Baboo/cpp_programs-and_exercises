#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=5;a++)
	{
		cout<<" ";
		for(int b=1;b<=(2*a-1);b++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
