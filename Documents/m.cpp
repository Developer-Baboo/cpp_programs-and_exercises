#include<iostream>
using namespace std;
int main(){
	char ch;
	char choice;
	float value1,value2,result;
	do{
	cout<<"%%%%%welcome to our calculator%%%%%\n";
	cout<<" enter the first value:"; cin>>value1;
	cout<<"enter operation:  +-/*:"; cin>>choice;	
	cout<<"enter the second value:"; cin>>value2;
		if (choice=='+')
	result=value1+value2;	
		if (choice=='-')
	result=value1-value2;
		if (choice=='/')
	result=(float)value1/value2;
		if (choice=='*')
	result=value1*value2;
	cout<<"The results is=\n"<<result;
}
	while(ch=='y');
}
