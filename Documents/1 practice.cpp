#include<iostream>
using namespace std;
int main(){
const int N=10;
for(int a=1;a<=N;a++)
	{
	for(int b=1;b<=a+N;b++){
	if(N<a)
	{
		cout<<"0";
	}
	else
	{
		cout<<"*";
	}
}
	cout<<endl;
	}	
}
