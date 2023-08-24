#include<iostream>
using namespace std;
int main() {
	int first , second;
	cout<<"Enter first value";
	cin>>first;
	cout<<"Enter second value";
	cin>>second;
	for (int i = first;i<second; i++)
	if(i%2!=0)
	cout<<i<<" "<<endl;
	return 0;
}
