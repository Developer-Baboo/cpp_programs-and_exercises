#include<iostream>
using namespace std;
int main()
{
	int a,b;
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=5;b++)
		cout<<" ";
		for(b=1;b<=2;b++)
		cout<<"H";
		for(b=1;b<=3;b++)
		{
			if(a==5||a==6)
			cout<<"H";
			else
			cout<<" "; 
		}
		for(b=1;b<=2;b++)
		cout<<"H";
		
		for(b=1;b<=2;b++)
		cout<<" ";
		
		for(b=1;b<=2;b++)
		cout<<"A";
		for(b=1;b<=3;b++){
			if(a==1||a==2||a==5||a==6)
			cout<<"A";
			else 
			cout<<" ";
		}
		for(b=1;b<=2;b++)
		cout<<"A";
		
		for(b=1;b<=2;b++)
		cout<<" ";
		
		for(b=1;b<=2;b++){
			if(a==7||a==8)
			cout<<" ";
			else 
			cout<<"S";
		}
		for(b=1;b<=3;b++){
			if(a==3||a==4||a==7||a==8)
			cout<<" ";
			else 
			cout<<"S";
		}
		for(b=1;b<=2;b++){
			if(a==3||a==4)
			cout<<" ";
			else 
			cout<<"S";
		}
		
		for(b=1;b<=2;b++)
		cout<<" ";
		
		for(b=1;b<=2;b++)
		cout<<"N";
		for(b=1;b<=9;b++){
			if(a-b==0||a-b==1)
			cout<<"N";
			else
			cout<<" ";
			
		}
		for(b=1;b<=2;b++)
		cout<<"N";
		
		for(b=1;b<=2;b++)
		cout<<" ";
		
		for(b=1;b<=2;b++)
		cout<<"A";
		for(b=1;b<=3;b++){
			if(a==1||a==2||a==5||a==6)
			cout<<"A";
			else 
			cout<<" ";
		}
		for(b=1;b<=2;b++)
		cout<<"A";
		
		for(b=1;b<=2;b++)
		cout<<" ";
		
		for(b=b=1;b<=2;b++){
			if(a==1||a==2||a==9||a==10)
			cout<<"I";
			else 
			cout<<" ";
		}
		for(b=1;b<=2;b++)
		cout<<"I";
		for(b=b=1;b<=2;b++){
			if(a==1||a==2||a==9||a==10)
			cout<<"I";
			else 
			cout<<" ";
		}
		
		for(b=1;b<=2;b++)
		cout<<" ";
		
		
		for(b=1;b<=2;b++)
		cout<<"N";
		for(b=1;b<=9;b++)
		{
			if(a-b==0||a-b==1)
			cout<<"N";
			else
			cout<<" ";
			
		}
		for(b=1;b<=2;b++)
		cout<<"N";
		
	cout<<endl;
	}
	return 0;
}
