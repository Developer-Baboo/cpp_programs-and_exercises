#include<iostream>
using namespace std;
int main(){
	int a;
	int n;
	cout<<"input week number(1-7):"; cin>>n;
	cout<<"The day is";
	switch (a)
	{
		case 1: cout<<"Monday"; break;
		case 2: cout<<"Tuesday"; break;
		case 3: cout<<"Wednesday"; break;
		case 4: cout<<"Thursday"; break;
		case 5: cout<<"Friday"; break;
		case 6: cout<<"Saturday"; break;
		case 7: cout<<"Sunday"; break;
		default: cout<<"Sorry there are only seven days in week";
	}
	
}
