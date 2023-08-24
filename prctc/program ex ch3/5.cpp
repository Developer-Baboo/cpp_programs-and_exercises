#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=20;a++){
		for(int b=19;b>=a;b--){
		cout<<" ";
		}
		for(int b=1;b<=a;b++){
		cout<<"X";
		}
		for(int b=1;b<a;b++){
		cout<<"X";
		}
	cout<<endl;}
	return 0;
}
