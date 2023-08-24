#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b;
	char ch,ch1;
	do{
	cout<<"Enter first number, operator, second number:";cin>>a>>ch1>>b;
	switch(ch1){
		case '+':cout<<"Answer= "<<a+b; break;
		case '-':cout<<"Answer= "<<a-b; break;
		case '*':cout<<"Answer= "<<a*b; break;
		case '/':
		if(b==0){
	    cout<<"it can not be divided,(infinity)";
	    }
		else
		cout<<"Answer= "<<(float)a/b; break;
	
		
	}
	cout<<"\nDo another (y/n)?";
	ch=getche();
	cout<<endl;	
	}while(ch=='y');
	return 0;
}
