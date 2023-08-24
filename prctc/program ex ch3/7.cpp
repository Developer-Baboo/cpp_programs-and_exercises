#include<iostream>
using namespace std;
int main(){
	float a,b,c,d;
	cout<<"Enter initial amount:";cin>>a;
	cout<<"Enter number of years:";cin>>b;
	cout<<"Enter interest rate (percent per year):";cin>>c;
	cout<<endl;
	for(float d=1;d<=b;d++){
	a+=((a*(c/100))+d-d);
	cout<<"At the end of "<<d<<" years, you will have "<<a<<" dollars."<<endl;
	}
	return 0;
}
