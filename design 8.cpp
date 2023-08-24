#include<iostream>
using namespace std;
int main() {
	for(int a=1;a<=10;a++) {
		for(int b=10;b>=a;b--)
		{
			cout<<">";
		}
		for(int a=1;a<=1;a++)
		{
			cout<<"-";
		}
		for(int b=1;b<=a;b++) {
	cout<<"1";}
	for(int b=1;b<=a;b++) {
	cout<<"1";}
	for(int a=1;a<=1;a++)
		{
			cout<<"-";
		}
	for(int b=10;b>=a;b--)
		{
			cout<<">";
		}
	cout<<endl;
	}
	for(int a=1;a<=10;a++) {
		for(int b=1;b<=a;b++)
		{
			cout<<">";
		}
		for(int a=1;a<=1;a++)
		{
			cout<<"-";
		}
		for(int b=10;b>=a;b--) {
	cout<<"1";}
	for(int b=10;b>=a;b--) {
	cout<<"1";}
	for(int a=1;a<=1;a++)
		{
			cout<<"-";
		}
	for(int b=1;b<=a;b++)
		{
			cout<<">";
		}
	cout<<endl;
	}
	return 0;
}
