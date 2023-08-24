#include<iostream>
using namespace std;
int main() {
	int num1,num2;
	//int x=num1+num2;
	int op;
	cout<<"Enter 1st number:";			cin>>num1;
	cout<<"Enter 2nd number:";			cin>>num2;
cout<<"1 for Addition"<<endl;
cout<<"2 for Substraction"<<endl;
cout<<"3 for multiplication"<<endl;
cout<<"4 for Division"<<endl;
cout<<"5 for Reminder"<<endl;
cout<<"Inter any operation"	<<endl;			cin>>op;
switch(op){
	case 1:
		cout<<"Sum is :"<<num1+num2<<endl;
		break;
	
	case 2:
		cout<<"Substraction is :"<<num1-num2<<endl;
		break;
	case 3:
		cout<<"Multiplication is :"<<num1*num2<<endl;
		break;
	case 4:
		cout<<"Division is :"<<(float)num1/num2<<endl;
		break;
	case 5:
		cout<<"Reminder is :"<<num1%num2<<endl;
		break;
}
}
