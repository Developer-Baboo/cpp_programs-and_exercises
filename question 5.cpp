#include<iostream>
using namespace std;
int main() {
	int a=1,i=1,d=1,g=1;
	++a;
	i++;
	d--;
	++g;
	a=(++g)+(d--)+(++a)+(i++);
	cout<<a;
	
}
