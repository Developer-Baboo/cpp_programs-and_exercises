#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter the character"<<endl;
cin>>ch; 
if(ch>=30 && ch<=39)
cout<<ch<<" is a number"<<endl;
if(ch>=65 && ch<=90)
cout<<ch<<"is a upper case alphabet"<<endl;
if(ch>=97 && ch<=122)
	cout<<ch<<" is a lower case alphabet"<<endl;
	else
	cout<<ch<<"is a symbol";
	
}
