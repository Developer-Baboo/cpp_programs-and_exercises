#include<iostream>
using namespace std;
int main() {
	for(int a=1;a<=10;a++)
	{
		for(int b=10;b>=a;b--)
		{
			cout<<"*";	
			for(int c=a;c>=10;c+=3)
			{
				cout<<"*";
			}
			
		}
		cout<<endl;
	}
}
