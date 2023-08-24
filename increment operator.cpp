#include<iostream>
using namespace std;
int main() {
	int x=5,y=5,z;
	
	x = ++x;	y = --y;
	// x=6		// y = 4
	z = x++ + y--;
	// z =  6+4 
	cout<<z;
	// here x value becomes 7 and y values will be 3, 7+3=10
	return 0;
}
