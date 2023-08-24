#include<iostream>
using namespace std;
int main() {
	char choice;
	float value1,value2;
	double result;
	cout<<"%%%%%%%%%welcome to our calculator %%%%%%%%"<<endl;
	cout<<"Enter the first value:";		cin>>value1;
	cout<<"Enter operation:+-/*:";			cin>>choice;
	cout<<"Enter the second value:";		cin>>value2;
	if(choice=='+')
	result =value1+value2;
	if(choice=='-')	
	result =value1-value2;
	if(choice=='*')
	result =value1*value2;
	if(choice=='/')
	result =value1/value2;
	cout<<result;
}
