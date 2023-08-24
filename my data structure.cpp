#include<iostream>
#include<string.h>
using namespace std;
struct student{
	char name[30];
	char F_name[30];
	char rollno[14];
	char Gender[30];
	int marks;
	char university[50];
	char department[50];
	float  per;
};
int main() {
	student stud;
	student stud2={ "Baboo","Mehandro","2k19/swe/21","Male",23,"Sindh university jamshor","Software engineering",
	(float)stud.marks/30*100};
	strcpy(stud.name,"Baboo");	
	strcpy(stud.F_name,"Mehandro");	
	strcpy(stud.rollno,"2k19/swe/21");	
	strcpy(stud.Gender,"Male");	
	//strcopy(stud.marks,23);	
	strcpy(stud.university,"Sindh university jamshor");	
	strcpy(stud.department,"Software engineering");
	stud.marks=23;
	stud.per=(float)stud.marks/30*100;
	cout<<"Student data\n";
	cout<<"Name:"<<stud2.name<<endl;
	cout<<"F_name"<<stud2.F_name<<endl;
	cout<<"rollno:"<<stud2.rollno<<endl;
	cout<<"Gender:"<<stud2.Gender<<endl;
	cout<<"university:"<<stud2.university<<endl;
	cout<<"department:"<<stud2.department<<endl;
	cout<<"marks:"<<stud2.marks<<endl;
	cout<<"per:"<<stud2.per<<endl;
	return 0;
}
