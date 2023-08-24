#include<iostream>
using namespace std;
struct Student{
	char name[40];
	char f_name[40];
	char rollnumb[15];
	int marks;
	float percent;
};
int main(){
	cout<<"_______________________________"<<endl;
	cout<<"DATA OF STUDENT 1 \n";
	cout<<"_______________________________|"<<endl;
	Student stud1={"SUHAIL KUMAR","DAYAL DAS","2k19/SWE/113",22,73.33};
	cout<<"NAME        :"<<stud1.name<<endl; 
	cout<<"F NAME      :"<<stud1.f_name<<endl;
	cout<<"ROLL NUMBER :"<<stud1.rollnumb<<endl;
	cout<<"MARKS       :"<<stud1.marks<<endl;
	cout<<"PERCENTAGE  :"<<stud1.percent<<endl;
	cout<<"_______________________________"<<endl;
	cout<<"DATA OF STUDENT 2 \n";
	cout<<"_______________________________"<<endl;
	Student stud2={"BABOO KUMAR","MEHANDRO","2k19/SWE/21",21,70};
	cout<<"NAME        :"<<stud2.name<<endl; 
	cout<<"F NAME      :"<<stud2.f_name<<endl;
	cout<<"ROLL NUMBER :"<<stud2.rollnumb<<endl;
	cout<<"MARKS       :"<<stud2.marks<<endl;
	cout<<"PERCENTAGE  :"<<stud2.percent;
}
