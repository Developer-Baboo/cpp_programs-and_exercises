#include<iostream>
using namespace std;
int main() {
	for(int a=1;a<=11;a++)
	{
		for(int c=1;c<=10;c++)
		{
			cout<<"  ";
		}
	}
	{
		for(int b=1;b<=10;b++)
		if(b>=4 && b<=7 && a>=3 && a<5 && b>=4 && b<=7 && a>7 && a<10 )
		{
			cout<<" ";
		}
		else if(b==10 && a==1)
		{
			cout<<" ";
		 }
		 else if(a==11 && b==10)
		 {
		 	cout<<" ";
		  } 
		  else if(a==6 && b>8)
		  cout<<" ";
		  else
		{
			cout<<"B";
		}
		cout<<endl;
		for(int g=1;g<=1;g++)
		{
			cout<<"  ";
		}
		for(int c=1;c<=10;c++)
		if(a>2 && a<=5 && c<=7 && c>=4)
		{
			cout<<" ";
		}
		else if(a>7 && c<=7 && c>=4)
		{
			cout<<" ";
		}
		else
		{
			cout<<"A";
		}
		for(int g=1;g<=1;g++)
		{
			cout<<"  ";
		}
			for(int b=1;b<=10;b++)
		if(b>=4 && b<=7 && a>=3 && a<5 || b>=4 && b<=7 && a>7 && a<10 )
		{
			cout<<" ";
		}
		else if(b==10 && a==1)
		{
			cout<<" ";
		 }
		 else if(a==11 && b==10)
		 {
		 	cout<<" ";
		  } 
		  else if(a==6 && b>8)
		  cout<<" ";
		  else
		{
			cout<<"B";
		}
		for(int g=1;g<=1;g++)
		{
			cout<<"  ";
		}
		for(int s=1;s<=10;s++)
		if(a<10 && s>=4 && s<=7)
		{
			cout<<" ";
		}
		else
		{
			cout<<"U";
		}
		cout<<endl;
	}
}
