#include<iostream>
using namespace std;
int main() {
	long dividend,divisor;
	char ch;
	do{
		cout<<"Enter dividend:";	cin>>dividend;
		cout<<"Enter divisor:";		cin>>divisor;
		if (divisor==0) {
			cout<<"Illegal divisor\n";
			continue;
		}
		cout<<"Quotient is" <<dividend /divisor;
		cout<<",reminder is "<<dividend%divisor;
		cout<<"\n Do another?(y/n):"; cin>>ch;
	} while (ch!='n');
	return 0;
}

