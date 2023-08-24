#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,c,d;
char ch,ch1=47,ch2;
do{
	cout<<"First fraction:";cin>>a>>ch1>>b;
	cout<<"Operator:";cin>>ch2;
	cout<<"Second fraction:";cin>>c>>ch1>>d;
	switch(ch2){
		case '+':cout<<"a/b + c/d="<<(a*d)+(b*c)<<ch1<<(b*d);break;
		case '-':cout<<"a/b - c/d="<<(a*d)-(b*c)<<ch1<<(b*d);break;
		case '*':cout<<"a/b * c/d="<<(a*c)<<ch1<<(b*d);break;
		case '/':cout<<"a/b / c/d="<<(a*d)<<ch1<<(b*c);break;
		default:
		cout<<"Wrong input";break;	
	}
	cout<<"\nDo you wish to continue (y/n)? ";
	ch=getche();
	cout<<endl;
}while(ch=='y');
	return 0;
}
