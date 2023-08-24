#include<iostream>
using namespace std;
int main() {
	int age,height;
	cout<<"Enter age of candidate:";	cin>>age;
	cout<<"Enter height of candidate:";	 cin>>height;
	if(age>=18 && height >=160)
	cout<<"candidate is selected";
	else 
	cout<<"Sorry candidate is not selected";
	return 0;
}
