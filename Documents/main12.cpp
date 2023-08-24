#i#include<iostream>
using namespace std;
int main(){
	int choice;
	float value1,value2,results;
	cout<<"Hello guys,   This is Suhail Thakrani"<<endl;
	cout<<"\t Wellcome to my calculator"<<endl;
	while (true)
	{
		cout<<"1.Add\n"<<
		"2.Subtract\n"<<
		"3.Divide\n"<<
		"4.multiply\n"<<
		"5.Exit\n\n"<<
		"What would you like to do?\n"<<
		"Please enter any key given above.....\n";
		cin>>choice;
		if(choice==5)
		break;
		cout<<"\nPlease enter the first value:";
		cin>>value1;
		cout<<"\nPlease enter the second value:";
		cin>>value2;
		if(choice==1)
		results=value1+value2;
		else if(choice==2)
		results=value1-value2;
		else if(choice==3)
		results=value1/value2;
		else if(choice==4)
		results=value1*value2;
		cout<<"\nThe result is "<<results<<"\n\n";
	}
	cout<<"\n\n Okay Bye Bye!\n ";		
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	return 0;
}
