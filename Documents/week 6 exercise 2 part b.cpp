#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"input character::"; cin>>ch;
	switch (ch)
	{
		case 'a':cout<<"is a vowel"; break;
		case 'e':cout<<"is a vowel"; break;
		case 'i':cout<<"is a vowel"; break;
		case 'o':cout<<"is a vowel"; break;
		case 'u':cout<<"is a vowel"; break;
		default:cout<<"is a consonant";
	}
}
