#include<iostream>
using namespace std;
struct student{
	char Name [40];
	char Caste [40];
	char University_name[60];
	int  data_of_birth;
	char gender[30];
	char current_address[20];
	int Roll_number;
	char Father_name [30];
	short marks;
	float percent;
};
int main(){
	student stud;
	cout<<"Enter name:"<<endl; 
	cin>>stud.Name;
	cout<<"Enter roll number:"<<endl; 
	cin>>stud.Roll_number;
	cout<<"Enter f/name:"<<endl; 
	cin>>stud.Father_name;
	cout<<"Enter marks:"<<endl; 
	cin>>stud.marks;
	cout<<"enter percentage:"<<endl; 
	cin>>stud.percent;
	cout<<"Enter address:"<<endl;
	cin>>stud.current_address;
	cout<<"Enter gender:"<<endl;
	cin>>stud.gender;
	cout<<"Enter caste:"<<endl;
	cin>>stud.Caste;
	cout<<"Enter date of birth:\n\n\n\n\n"<<endl<<endl<<endl<<endl;
	cin>>stud.data_of_birth;
	cout<<"Name:"<<stud.Name<<endl;
	cout<<"Roll number:"<<stud.Roll_number<<endl;
	cout<<"f/name:"<<stud.Father_name<<endl;
	cout<<"marks:"<<stud.marks<<endl;
	cout<<"Percentage:"<<stud.percent<<endl;
	cout<<"current address:"<<stud.current_address<<endl;
	cout<<"Gender:"<<stud.gender<<endl;
	cout<<"Caste:"<<stud.Caste<<endl;
	cout<<"Date of birth:"<<stud.data_of_birth<<endl;
	
	
	
}
