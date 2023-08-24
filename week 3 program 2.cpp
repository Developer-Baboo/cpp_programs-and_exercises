#include<iostream>
using namespace std;
int main() {
	float rad;
	const float PI = 3.1415F;
	cout<<"Enter radious of circle:";
	cin>>rad;
	float area = PI*rad*rad;
	cout<<"Area is "<<area<<endl;
	return 0;
}
