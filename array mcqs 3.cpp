#include<iostream>
using namespace std;
int main() {
	int a[3][2]={{ 3,6},{8,4},{7,1}};
	cout<<*a[1]<<*(*a+1);
	return 0;
}
