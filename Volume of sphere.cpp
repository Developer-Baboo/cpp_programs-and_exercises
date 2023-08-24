#include<iostream>
using namespace std;
int main() {
	float  rad;
	const float PI=3.142F;
	cout<<"Enter Radious of sphere:";		cin>>rad;
	float volume =float (1.333333*PI*rad*rad*rad);
	cout<<"Volume is:"<<volume<<endl;
	return 0;
}
