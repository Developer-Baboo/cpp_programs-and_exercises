#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"enter the value of b:"<<endl;
	cin>>b;
	float c= fmod(a,(float)b);
	cout<<"reminder of a/b as floating point ="<<c<<endl;
	
	}
