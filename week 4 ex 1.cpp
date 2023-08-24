#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a,b,c;
	cout<<"Enter value of a:";
	cin>>a;
	cout<<"Enter value of b:";
	cin>>b;
	cout<<"Enter value of c:";
	cin>>c;
	float f = (pow(b,2)-4*a*c);
	float g = (sqrt(f));
	float h = (2*a);
	float x1 = (-b+g)/h;
	float x2 = (-b-g)/h;
	char ch4 = 253;		// for square 
	char ch6 = 241;		// for plus minus
	char ch7 = 251;		// for sqrt
	cout<<endl<<"X="<<"-b"<<ch6<<ch7<<"b"<<ch4<<"-4ac/2a"<<endl;
	cout<<"X1="<<x1<<"\t\t\t or \t\t"<<"X2="<<x2;
	return 0;
	
}
