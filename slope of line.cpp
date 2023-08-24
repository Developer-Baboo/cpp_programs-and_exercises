#include<iostream>
using namespace std;
int main() {
	int x1,x2,y2,y1;
	cout<<"Enter value of x1:";
	cin>>x1;
	cout<<"Enter vaue of x2:";
	cin>>x2;
	cout<<"Enter vaue of y1:";
	cin>>y1;
	cout<<"Enter value of y2:";
	cin>>y2;
	float m = y2-y1/x2-x1;
	cout<<"Slope of given points is:"<<m;
	return 0;
}
