#include<iostream>
#include<conio.h>
using namespace std;
void starline(int num,char ch)
{
	for(int i=1;i<=num;i++)
	{
		for(int a=1;a<=i;a++)
		{
		cout<<ch;
		}
		cout<<endl;
	}
}
 int main(){
 		char X;
 	int ch;
 	do{
 	cout<<"int char -128 - +127 or 0-255:"<<endl;
 	cin>>ch;
 	starline(10,ch);
 	cout<<"\ndo you want to conyinue...?"<<"\nPress y for yes:";
 	X=getche();
 	
	 }
	 while(X=='y'); 	
 }
