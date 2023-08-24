#include<iostream>
using namespace std;
int main() {
	const int DAYS	=7;		// number of string in array
	const int  MAX = 10;	// Maximum size of each string
	// array of string
	char string[DAYS][MAX]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	//cout<<star[j] <<endl;
	for(int j=0;j<DAYS;j++)			// display every string
	cout << star[j] <<endl;
	return 0;
		
	
}
