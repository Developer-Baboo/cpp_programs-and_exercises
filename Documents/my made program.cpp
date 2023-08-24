#include<iostream>
using namespace std;
int main(){
	int A;
	cout<<"enter the rows value:"; cin>>A;
	int a,b,c,d,e;
	for(a=1;a<=A;a++){
		for(b=a;b<=A;b++){
			cout<<" ";}
		for(c=1;c<=(2*A-1);c++){
			cout<<"*";}
		cout<<endl;}
	for(a=A;a<=b;a++){
		for(b=1<a;b<=A-1;b++){
			cout<<" ";}
		for(c=1;c<=(2*a-1);c++){
			for(d=1;d<=c;d++){
			cout<<"*";}
			cout<<endl;}
	}
}
