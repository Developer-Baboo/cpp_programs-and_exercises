#include<iostream>
using namespace std;
int main() {
	char ch;
	cout<<"Enter any character:";
	cin>>ch;
	if(ch>=65&&ch<=90)
	cout<<"is a upper case character alphabet";
	else if(ch>=97&&ch<=122)
	cout<<"is a lowercase character alphabet";
	else if(ch>=48&&ch<=57)
	cout<<"is a number";
	else
	cout<<" is a special symbol";
	
}
