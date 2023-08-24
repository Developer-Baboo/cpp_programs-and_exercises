#include<iostream>
using namespace std;
int main() {
	int a,b=7,c = 5;
	if(b++>7)
	a=++b+c++;
	else 
	a=++b-c++;
	cout<<a <<b <<c;
}
