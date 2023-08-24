#include<iostream>
using namespace std;
int a=0;
void func(){
	int a=0;
	a+=10;
}
int main(){
	int a=0;
	func();
	func();
	func();
	cout<<a;
	cout<<endl;
	cout<<a;
}
