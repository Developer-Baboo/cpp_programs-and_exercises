#include<iostream>
using namespace std;
int main() {
	for(int a=1;a<=7;a++)
	{
		for(int b=1;b<=7;b++)
		if(b>=2 && b<=3 && a==1) 
		{
			cout<<"*";
		}
		else if (b>=5 && b<=6 && a==1)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	return 0;
}
