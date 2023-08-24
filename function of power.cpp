#include<iostream>
#include<conio.h>
using namespace std;
float pow(float base,float power){
	float p=1;
	for(int a=1;a<=power;a++)
	p*=base;
	return p;
}
int main(){
char ch;
do{
	float p,base,power;
	cout<<"Enter base:";cin>>base;
	cout<<"Enter power:";cin>>power;
	p=pow(base,power);
	cout<<p;
	ch=getch();
	cout<<endl;
}while(ch=='\r');
	return 0;
}
