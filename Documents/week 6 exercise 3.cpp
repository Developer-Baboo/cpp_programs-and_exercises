#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter the character"<<endl;
cin>>ch; 
	if(ch>=65 && ch<=90)
cout<<" is a upper case alphabet"<<endl;
else if(ch>=97 && ch<=122)
cout<<" is a lower case alphabet"<<endl;
	
else if(ch>=48 && ch<=57)	
cout<<" is a number"<<endl;
else
cout<<" is a special symbol";
}
