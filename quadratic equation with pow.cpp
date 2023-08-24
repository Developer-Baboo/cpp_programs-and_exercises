#include <iostream>
#include <cmath>

using namespace std;

int main()
{
double a,b,c,d,x1,x2;

cout<<"Enter value of a: "; cin>>a;
cout<<"Enter value of b: "; cin>>b;
cout<<"Enter value of c: "; cin>>c;

d=b*b-4*a*c;

x1=(-b+sqrt(d))/(2*a);
x2=(- b-sqrt(d))/(2*a);

cout<<"x1 is equal to "<<x1;
cout<<"\nx2 is equal to "<<x2;
}
