#include<iostream>
using namespace std;
int main() {
	int a,b;
	char ch;
	cout<<"Enter number operator number:";
	cin>>a>>ch>>b;
	switch (ch)
	{
	case '*':
	cout<<"The answer is:"<<a*b;	break;
	case'/':
	if(b==0)
	{
		cout<<"Cant devide with zero";	break;
	}
		cout<<"Answer is:"<<a/b;	break;
		case '-':
		cout<<"The answer is:"<<a-b;	 break;
		case '+':
		cout<<"The answer is:"<<a+b; 	break;
		default:
			cout<<"Sorry wrong operator";
}
return 0;
}
