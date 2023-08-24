#include<iostream>
#include<string.h>
struct employ{
	char name[40];
	int id;
	int age;
	float wage;
};
using namespace std;
int main(){
	employ joe;
	joe.name;
	joe.id=14;
	joe.age=32;
	joe.wage=24.15;
	strcpy(joe.name,"Joe");
	employ frank;
	frank.name;
	frank.id=15;
	frank.age=28;
	frank.wage=18.27;
	strcpy(frank.name,"Frank");
	cout<<"NAME\tID\tAGE\tWAGE"<<endl;
	cout<<joe.name<<"\t"<<joe.id<<"\t"<<joe.age<<"\t"<<joe.wage<<endl;
	cout<<frank.name<<"\t"<<frank.id<<"\t"<<frank.age<<"\t"<<frank.wage<<endl;
	return 0;
}
