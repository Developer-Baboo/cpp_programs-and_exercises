#include<iostream>
using namespace std;
int main(){
	int a;
	char ch;
	do{
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	if (a<3 && a>1){
	cout<<"You are little to study"<<endl;
	cout<<"Come when you will be of 3 years"<<endl;
	}
	else if (a<5 && a>3){
	cout<<"wellcome to primary school"<<endl;}
	else if (a<16 && a>11)
	cout<<"wellcome to high school"<<endl;
	else if (a<18 && a>16)
	cout<<"well come to our college"<<endl;
	else if (a<24 && a>18)
	cout<<"wellcome to university"<<endl;
	if(a>24 && a<28)
	cout<<"go and find job because you are now able to get marriage"<<endl;
	else if(a>28 && a<40)
	cout<<"you are of middle age "<<endl;
	else if(a>40 && a<60)
	cout<<"you should take retirement"<<endl;
	else if (a>60 && a<100)
	cout<<"you are old please take rest"<<endl;
	else
	cout<<"your age is determined humain being is not of age of greater than 100 "<<endl; 
cout<<"if you want to continue then press y or Y:";
cin>>ch;
}while(ch=='y');
}
