#include<iostream>
using namespace std;
//int main() {
	void repchar (char ch, int n)
	{
		for(int j=0;j<n;j++)		//function body
		cout <<ch;
		cout<<endl;
	}
	int main() {
		for(int a=180;a<=190;a++)
		repchar (a,a-179);
		return 0;	
	}
