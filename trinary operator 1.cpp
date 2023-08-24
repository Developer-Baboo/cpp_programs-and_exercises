#include<iostream>
using namespace  std;
int main() {
	int a;
	int b;
	cout<<"Enter a value:";	cin>>a;
	cout<<"Enter b value:"; 	cin>>b;
	int c = a>b?a:b;
	cout<<"The greater value is:"<<c<<endl;
	return 0;
}
