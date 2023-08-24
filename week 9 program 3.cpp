#include<iostream>4
#include<iomanip>
#include<conio.h>
using namespace std;
int main() {
	const int size =10;
	int roll_no[size];
	int marks[size];
	float per[size];
	char grade[size];
	cout<<"\nPlease enter the data for 10 students..."<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\nPlease enter student no."<<i+i<<" data..."<<endl;
		cout<<"Roll No.";
		cin>>roll_no[i];
		cout<<"Marks out of (500):";
		cin>>marks[i];
		per[i] = (float)marks[i]/500*100;
		if(per[i]>=80) grade[i]= 'A';
		else if (per[i]>=70&& per[i]<80) grade[i]='B';
		else if (per[i]>=60&& per[i]<70) grade[i]='c';
		else if (per[i]>=50&& per[i]<60) grade[i]='D';
		else if (per[i]>=40&& per[i]<50) grade[i]='P';	
	}
	cout<<"\n\n Press any key to continue....";
	getch();
	cout<<"\n\n\n\t\t RESULT LIST\n\n";
	cout<<setw(16)<<"ROLL NO."<<setw(12)<<"MARKS"
	<<setw(14)<<"PERCENTAGE"<<"\tGRADE"<<endl<<endl;
	for(int i=0;i<size;i++)
	cout<<setw(16)<<roll_no[i]<<setw(12)<<marks[i]
	<<setw(13)
	<<setprecision(2) // Digit after decimal point 
	<<setiosflags(ios::fixed) // Do not show number in esponential form
	<<setiosflags(ios::showpoint) // Allways show decimal point 
	<<per[i]<<"%\t"<<grade[i]<<endl;
}
