#include<iostream>	// for cout etc
#include<cmath>	// for sqrt
using namespace std;
int main() {
	double number, answer;		// sqrt require type double
	cout<<"Enter a number:";
	cin>>number;	// get the number
	answer  = sqrt(number);	// find squre root 
	cout<<"square root is"<<answer<<endl; 		// display it
	return 0;			// end of function body
	
}
