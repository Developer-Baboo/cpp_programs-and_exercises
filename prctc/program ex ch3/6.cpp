#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	unsigned int a;
	unsigned long fact=1;
	char ch;
do{
	cout<<"Enter a number:";cin>>a;
	for(int n=a;n>0;n--)
	fact*=n;
	cout<<"factorial is: "<<fact;
    ch=getch();
    cout<<endl;
    fact=1;
}while(ch!='0');	
	return 0;
}
