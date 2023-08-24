#include<iostream>
#include<string.h>
using namespace std;
struct student {
	char roll[50];
	char name[20];
	int marks;
	float per;
};
int main() {
	student stud;
	student stud2 = {"2k19/swe/21","Baboo",30,
	(float)stud.marks/30*100};
	strcpy(stud.roll,"2k19/swe/21");
	strcpy(stud.name,"Baboo");
	stud.marks = 30;
	stud.per = (float)stud.marks/30*100;
	cout<<"Student data:"<<endl;
	cout<<"Name:"<<stud2.name<<endl;
	cout<<"Roll:"<<stud2.roll<<endl;
	cout<<"Marks:"<<stud2.marks<<endl;
	cout<<"Percentage:"<<stud2.per<<endl;
	
}
