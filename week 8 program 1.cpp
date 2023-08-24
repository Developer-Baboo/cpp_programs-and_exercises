#include<iostream>
using namespace std;
struct Employee{
	short id;
	int age;
	double wage;
};
int main() {
	Employee joe;
	joe.id=14;
	joe.age=32;
	joe.wage=24.15;
	Employee Frank ={ 15,28,18.27};
	int totallAge=joe.age+Frank.age;
	if(joe.wage>Frank.wage) 
	cout<<"joe makes more than frank\n";
	else if (joe.wage<Frank.wage)
	cout<<"joe makes less than frank\n";
	else
	cout<<"joe and frank makes the same amount \n";
	Frank.wage+=2.50;
	++joe.age;
	return 0;
}
