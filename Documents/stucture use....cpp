#include<iostream>
using namespace std;
struct student{
	char Rollno[13];
	char Name[50];
	int marks;
	float percent;
};
int main(){
	student suhail;
	cout<<"enter your Roll number:" ; cin>>suhail.Rollno;
	cout<<"enter your name:"; cin>>suhail.Name;
	cout<<"enter your marks:"; cin>>suhail.marks;
	cout<<"enter your percentage:"; cin>>suhail.percent;
}

