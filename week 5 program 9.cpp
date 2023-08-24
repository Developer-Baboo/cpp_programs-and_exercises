#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
	int main() {
	char ch;
	double number ,answer;
	do
	{
		cout<<"\nEnter a number:"<<endl;	cin>>number;
		answer=sqrt(number);
		cout<<"Square root is:"<<answer<<endl;
		cout<<"Do you want the square root of any number"<<endl;
		cout<<"press Y for eys"<<endl<<endl;
		ch=getche();
	}
	while(ch =='Y');
	return 0;
}
