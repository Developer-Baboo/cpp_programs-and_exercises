#include<iostream>
#include<string.h>
using namespace std;
struct student{
	char name [40];
	char rollnumber[14];
	char F_name [30];
	int marks;
	float percent;
};
int main(){
	student stud={
	"Baboo","2k19/swe/21","Mehandro",23,76.66};
	strcpy (stud.rollnumber , "2k19/swe/21");
	strcpy(stud.name,"Baboo");
	strcpy(stud.F_name,"Mehandro");
	stud.marks=23;
	stud.percent=(float)stud.marks/30*100;
	cout<<"student data"<<endl;
	cout<<"name:"<<stud.name<<endl; 
	cout<<"roll number:"<<stud.rollnumber<<endl; 
	cout<<"f/name:"<<stud.F_name<<endl; 
	cout<<"marks:"<<stud.marks<<endl; 
	cout<<"percentage:"<<stud.percent<<endl;
	}	
