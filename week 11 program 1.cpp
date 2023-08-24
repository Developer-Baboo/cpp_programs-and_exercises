#include<iostream>
using namespace std;
void intfrac(float,float&,float&);		// declaration
int main() {
	float number,intpart,fracpart;		// float variables
	do{
		cout<<"Enter a real number:";		// number from user
		cin>>number;
		intfrac(number,intpart,fracpart);		// find int and frac
		cout<<"Integar part is "<<intpart 		// print them
			<<",fraction part is "<<fracpart<<endl;
	}		while (number !=0.0);
	return 0;
}
	// finds integar add fractional parts of real number
	void intfrac(float n,float& intp,float& fracp) {
		long temp = (long)(n);		// convert into long int,
		intp = (float)(temp);		// back to float
		fracp = n-intp;		// subtract integar part
	} 
