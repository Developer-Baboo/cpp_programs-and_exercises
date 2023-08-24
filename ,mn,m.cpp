#include <iostream>
#include <string.h>
using namespace std;
struct student
{
char roll[14];
char name[10];
int marks;
float per;
};
int main() 
{
student stud;
student stud2 = {"2k19/SWE/21", "Baboo kumar" , 23, 
(float)stud2.marks/30*100};
strcpy(stud.roll , "2k19/SWE/21");
strcpy(stud.name , "Baboo kuamar heerani");
stud.marks = 17;
stud.per = (float)stud.marks / 30 * 100;
cout<<"Student Data:"<<endl;
cout<<"Roll No.:"<<stud2.roll<<endl;
cout<<"Name:"<<stud2.name<<endl;
cout<<"Marks:"<<stud2.marks<<endl;
cout<<"Parcentage:"<<stud2.per;
return 0;
}
