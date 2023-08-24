#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int a,b;
	char ch;
	do{
	cout<<"Enter number operator number:";
	cin>>a>>ch>>b;
	switch(ch)
	{
		case '*':
		cout<<"The answer is:"<<a*b;	break;
		case '/':
		if (b==0)
		{
			cout<<"Cant divide by zero";	break;
		}
		cout<<"The answer is:"<<a/b;	break;
		case '-':
		cout<<"The answer is:"<<a-b; break;
		case '+':
		cout<<"The answer is:"<<a+b;	break;
		default:
			cout<<"Sorry wrong operator";
		}
		cout<<endl<<"Do you want to press Y of yes:";	cin>>ch;
		}
		while (ch=='Y');
		return 0;
		}
