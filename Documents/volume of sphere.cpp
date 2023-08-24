#include<iostream>
using namespace std;
int main(){
	const float PI =3.142;
	int r;
	float v;
	cout<<"Enter the value of radius r:";cin>>r;
	v=4/3*(PI*r*r*r);
	cout<<"volume of sphere="<<v<<endl;
}
