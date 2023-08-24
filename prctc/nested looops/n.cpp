#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=7;a++){
	for(int b=7;b>=a;b--)
	cout<<">";
	for(int b=1;b<=9;b++)
	if(a+b==9)
	cout<<"-";
	for(int b=1;b<=a;b++)
	cout<<"1";
	for(int b=1;b<a;b++)
	cout<<"1";
	for(int b=1;b<=8;b++)
	if(a-b==0)
	cout<<"-";
	for(int b=8;b>a;b--)
	cout<<"<";
    cout<<endl;
	}
	{
	for(int a=1;a<=1;a++)
	{
	for(int b=1;b<=17;b++)
	{
	
	if(b==1)
	cout<<"-";
	else if(a==1&&(b!=1&&b!=17))
	cout<<"1";
	else if(b==17)
	cout<<"-";
	}cout<<endl;	
	}
	}
	for(int a=1;a<=1;a++){
	for(int b=1;b<=17;b++){
    if(a==1)
	cout<<"1";
}	cout<<endl;
}
for(int a=1;a<=1;a++){
	for(int b=1;b<=17;b++){
	
	if(b==1)
	cout<<"-";
	else if(a==1&&(b!=1&&b!=17))
	cout<<"1";
	else if(b==17)
	cout<<"-";
	}cout<<endl;	
	}
	{
	for(int a=1;a<=7;a++){
	for(int b=1;b<=a;b++)
    cout<<">";
    for(int b=1;b<=8;b++)
	if(b-a==1)
	cout<<"-";
    for(int b=7;b>=a;b--)
    cout<<"1";
    for(int b=6;b>=a;b--)
    cout<<"1";
    for(int b=1;b<=8;b++)
    if(a+b==8)
    cout<<"-";
    for(int b=1;b<=a;b++)
    cout<<"<";
	cout<<endl;
	}
	
}
	return 0;
}
