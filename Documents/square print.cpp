#include<iostream>
using namespace std;
int main(){
	cout<<endl;
	for(int a=1;a<=10;a++)
	{
		for(int s=1;s<=5;s++)
		{
			cout<<" ";
		}
		for(int b=1;b<=20;b++)
		
		if(a<=9 && a>=2 && b>=2 && b<=19)
		{
			cout<<" ";
		}
		else
		{
			cout<<"#";
		}
		cout<<endl;
	}
}
