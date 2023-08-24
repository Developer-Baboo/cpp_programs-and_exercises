#include<iostream>
using namespace std;
int x;		// global varible
int setx();		// function declaration
int main()
{
	// set x to a value,using 
	setx()= 92;	// function call to left side
	cout<<"x="<<x<<endl;		// display new value in x
	return 0; 
}
//---------------------------------------------
int setx() 
{
	return x;		// returns the value to be modified
}
