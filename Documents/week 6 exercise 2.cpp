#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"input character:"<<endl;
	 cin>>ch;
	if(ch =='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
	cout<<ch<<" is a vowel"<<endl;}
	else
	cout<<ch<<" is a consonant";
}