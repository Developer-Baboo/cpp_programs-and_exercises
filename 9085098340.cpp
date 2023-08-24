#include<iostream>
using namespace std;
struct student{
	char name [40];
	char rollnumber;
	char F_name [40];
	int marks;
	float percent;
};
int main(){
	student stud;
	cout<<"enter name:"<<endl; 
	cin>>stud.name;
	cout<<"enter roll number:"<<endl; 
	cin>>stud.rollnumber;
	cout<<"enter f/name:"<<endl; 
	cin>>stud.F_name;
	cout<<"enter marks:"<<endl; 
	cin>>stud.marks;
	cout<<"enter percentage:"<<endl; 
	cin>>stud.percent;
}
