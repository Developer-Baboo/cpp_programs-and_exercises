#include<iostream>
using namespace std;
int main() {
	float V,I,R,P;
	cout<<"Enter volage across the resistor:";		cin>>V;
	cout<<"Enter current through the resistor:";		cin>>I;
	R=V/I;
	P=(I*I)*R;
	cout<<"The power dissipation is:"<<P<<"Watts";
	return 0;
}
