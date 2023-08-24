#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"input character"<<endl;
	cin>>ch;
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
	//cout<<"input character:"<<endl;
	//cin>>ch;
	cout<<" It is a vowel"<<endl;}
	else
	cout<<"character is not a vowel";
	return 0;
}
