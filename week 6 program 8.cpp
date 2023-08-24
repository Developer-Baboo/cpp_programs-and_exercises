#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main() {
	char ch = 'Y';
	double number,answer;
	while (ch=='Y')
	{
	cout<<endl<<"Enter a number:";
	cin>>number;
	answer = sqrt(number);
	cout<<"square root is:"<<answer<<endl;
	cout<<"Do you want square root of another number?"<<endl;
	cout<<"press y for yes..."<<endl<<endl;
	ch = getche();
	}
	return 0;
}
