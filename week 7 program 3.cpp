#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int r,c,k,j;
	char ch;
	do{
		cout<<"Enter number of rows:"<<endl;
		cin>>r;
		cout<<"printing triangle:"<<endl;
		for (k=1;k<=r;k++){
			for (j=1;j<=k;j++)
			cout<<'*';
			cout<<endl;
		}
	cout<<"Enter number of rows:";
	cin>>r;
	cout<<"Enter number of column:";
	cin>>c;
	cout<<"printing rectangle:"<<endl;
	for(k=1;k<=r;k++){
			for(j=1;j<=c;j++)
			cout<<'*';
			cout<<endl;
	}
	cout<<"Do you want to print more shapes????(Y/N)";
	ch = getche();
	}
	while( ch=='Y'|| ch=='N');
	return 0;
}
