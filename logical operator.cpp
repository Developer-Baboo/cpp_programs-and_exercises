#include<iostream>
using namespace std;
int main() {
	int a=2,b=3,c=4;
	cout<<(a<b&&a<c)<<endl;
	cout<<(a>b||a>c)<<endl;
	cout<<(b>a||c>b)<<endl;
	cout<<(!(a>b)&&!(a>c));
	return 0;
}
