#include<iostream>
using namespace std;
int main() {
	int marks;
	float per;
	cout<<"Enter marks out of(800):";	cin>>marks;
	per = (float)marks/800*100;
	if (per>=80)
	cout<<"Percentage="<<per<<"\t A Grade :-D ";
	else if (per>=70)
	cout<<"Percentage="<<per<<"\t B+ Grade :-D ";
	else if (per>=60)
	cout<<"Percentage="<<per<<"\t B Grade :-) ";
	else if (per>=50)
	cout<<"Percentage="<<per<<"\t C Grade :-1 ";
	else if (per>=40)
	cout<<"Percentage="<<per<<"\t D Grade :-1";
	else
	cout<<"Percentage="<<per<<"\t Fail:-";
	return 0;
}
