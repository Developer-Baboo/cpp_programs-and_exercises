#include<iostream>
using namespace std;
int main(){
	float F,C;
	char ch;
	cout<<"Type 1 to convert Fahrenheit to Celsius:"
	<<"\nType 2 to convert Celsius to Fahrenheit:";cin>>ch;
	if(ch=='1'){
		cout<<"Enter temperature in Fahrenheit:";cin>>F;
		cout<<"\nIn Celsius that is "<<(F-32)*5/9;
		}
	else if(ch=='2'){
		cout<<"Enter temperature in Celsius:";cin>>C;
		cout<<"\nIn Fahrenheit that is "<<(C*9/5)+32;
	
	}
	
	return 0;
}
