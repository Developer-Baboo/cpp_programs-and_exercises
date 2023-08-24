#include<iostream>
using namespace std;
int main() {
/*if ( a < b ) {
   a = b;
}
else {
   a = -b;
}
You can replace the above code with:

a = (a < b) ? b : -b;*/
	int a;
	cout<<"Enter number:";		cin>>a;
	(a%2==0) ? cout<<"number is Even": cout<<"numbe is odd";
}
