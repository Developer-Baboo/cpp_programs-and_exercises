#include<iostream>
using namespace std;
int main(){
int a=1;
int b=2;
if(a!=b)
cout<<++a+b;
cout<<a+b++;
else if(a+b!=0)
	cout<<a+b+a;
else 
	cout<<a;
}
