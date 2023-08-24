#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=6;a++)
	{
	for(int b=6;b>=a;b--)
	cout<<" ";
	for(int b=1;b<=a;b++)
	cout<<"*";
	for(int b=1;b<a;b++)
	cout<<"*";
    cout<<endl;
	}
	for(int a=1;a<=1;a++)
	{
	for(int b=1;b<=13;b++)
	if(a==1)
	cout<<"*";
	cout<<endl;
	}
	{
	for(int a=1;a<=6;a++){
	for(int b=1;b<=a;b++)
    cout<<" ";
    for(int b=6;b>=a;b--)
    cout<<"*";
    for(int b=5;b>=a;b--)
    cout<<"*";
    cout<<endl;
	}
	
	}
	return 0;
}
