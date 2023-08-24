#include<iostream>
using namespace std;
int main(){
	float a,b,c,d,e;
	cout<<"Enter initial amount:";cin>>a;
	cout<<"Enter final amount:";cin>>b;
	cout<<"Enter interest rate (percent per year):";cin>>c;
	cout<<endl;
	d=1;
	e=a+(a*(c/100));
	cout<<"You will have "<<e<<" dollars,At the end of "<<d<<" years."<<endl;
	for(float e=a+(a*(c/100));e<=b;e++){
	e+=(e*(c/100));
	d++;
    cout<<"You will have "<<e<<" dollars,At the end of "<<d<<" years."<<endl;
	}
	return 0;
}
