#include<iostream>
using namespace std;
int main() {
	/* display even or odd number entered by user*/
	int first,second;
	cout<<"Enter first number:";		cin>>first;
	cout<<"Enter second number:";		cin>>second;
	for(int i=first;i<second;i++)
	if(i/2!=0)
	cout<<i<<" "<<endl;
}
