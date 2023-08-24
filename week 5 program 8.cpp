#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
	int main() {
	char ch='Y';
	double number ,answer;
	while(ch =='Y')
	{
		cout<<"\nEnter a number:"<<endl;	cin>>number;
		answer=sqrt(number);
		cout<<"Square root is:"<<answer<<endl;
		cout<<"Do you want the square root of any number"<<endl;
		cout<<"press Y for yes"<<endl;
		ch=getche();
	}
	return 0;
}
