#include<iostream>
using namespace std;
void repchar (char,int);		// function declaration
int main() {
	repchar('-',43);		// calls to function
	cout<<"Data type Range"<<endl;
	repchar('=',23);	//  calls function
	cout<<"char -128 to 127"<<endl
		<<"short -32,768 to 32,767"<<endl
		<<"int system dependent"<<endl
		<<"long -2,147,483,648 to 2,147,483,648"<<endl;
		repchar ('-',43);		// call to function
		return 0;
}

void repchar(char ch,int n)		// function declarator
{
	for(int j=0;j<n;j++)		// function body
	cout<<ch;
	cout<<endl;
}
