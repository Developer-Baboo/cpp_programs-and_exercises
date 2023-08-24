#include<iostream>
#include<iomanip>
using namespace std;
struct Employee{
	short ID;
	int age;
	double wage;
};
int main(){
	Employee joe;
	joe.ID=14;
	joe.age=32;
	joe.wage=24.15;
	cout<<"NAME\tID\tAGE\tWAGE\n";
	cout<<"Joe" <<setw(7)<<joe.ID<<setw(8)<<joe.age<<setw(11)<<joe.wage<<endl;
	Employee Frank={15,28,18.27};
	cout<<"Frank"<<setw(5)<<Frank.ID<<setw(8)<<Frank.age<<setw(11)<<Frank.wage;
	return 0;
}
