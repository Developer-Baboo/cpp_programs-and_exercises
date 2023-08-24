#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,D;
	float x1,x2;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	cout<<"Enter the value of c:"<<endl;
	cin>>c;
	D=pow(b,2)-4*a*c;
	if(D<0)
	cout<<"both roots are imaginary"<<endl;
	if (D==0){
	cout<<"Both roots are equal"<<endl;
	x1=-b/(2.0*a);
	cout<<"roots are="<<"x"<<x1<<endl;}
	if(D>0){
	cout<<"Roots are real and distinct"<<endl;
	x1=(-b+sqrt(D))/(2*a);
	x1=(-b-sqrt(D))/(2*a);
	cout<<"\nRoots are	"<<endl<<"x1="<<x1<<endl<<"x2="<<x2;	
}
}
