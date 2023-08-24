#include<iostream>
using namespace std;
int main()
{
	float rad;
	const float PI=3.14159F;
	cout<<"Enter radious of sphere:";
	cin>>rad;
	float area = PI*rad*rad;
	cout<<"Volume is "<<area<<endl;
	return 0;

}
