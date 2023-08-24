#include<iostream>
using namespace std;
int main()
{
	float rad;
	const float PI=3.14159F;
	cout<<"Enter radious of sphere:";
	cin>>rad;
	float volume =(4*PI*rad*rad*rad)/3;
	cout<<"Volume is "<<volume<<endl;
	return 0;

}
