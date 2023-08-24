#include<iostream>
using namespace std;
float ibstokg(float);
int main() {
	float ibs,kgs;
	cout<<"\nEnter you weight in pound:";
	cin>>ibs;
	kgs=ibstokg(ibs);
	cout<<"Your weight in Kilogram is:"<<kgs<<endl;
	return 0;
}
float ibstokg(float pounds)	{	// convert pound into kilogramm
float kilograms=0.453592*pounds;
return kilograms;	
}
