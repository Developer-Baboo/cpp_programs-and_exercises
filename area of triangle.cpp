#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a,b,c;
	cout<<"Enter value of a:";		cin>>a;
	cout<<"Enter value of b:";		cin>>b;
	cout<<"Enter value of c:";		cin>>c;
	float s = (a+b+c)/2;
	float f = (s(s-a)(s-b)(s-c));
	 b = (sqrt(f));
	cout<<"Area of triangle is:"<<b;
}
