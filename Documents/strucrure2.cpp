#include<iostream>
using namespace std;
struct Student{
	short name[40];
	short f_name[40];
	char rollnumb[15];
	int marks;
	float percent;
};
int main(){
	Student stu1;
	stu1.name ="SUHAIL KUMAR";
	stu1.f_name="DAYAL DAS";
	stu1.rollnumb ="2k19/SWE/113";
	stu1.marks=22;
	stu1.percent=73.33;
//Student stu2={"BABOO KUMAR","MEHANDRO","2K19/SWE/21",21,21/30*100}
	
	cout<<stu1;
	cout<<"NAME  "<<stu1.name<<endl
	<<"F_NAME "<<stu1.f_name<<endl
	<<"ROLL NUMBER "<<stu1.rollnumb<<endl
	<<"MARKS"<<stu1.marks<<endl
	<<"PERCENT"<<stu1.percent;
}
