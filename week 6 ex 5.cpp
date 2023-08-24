#include<iostream>
using namespace std;
int main()
{
int n;
	cout<<"input month number:";	cin>>n;
	cout<<"The number of days=";
	switch (n)
	{
		case 1:cout<<"31";	break;
		case 2:cout<<"28";	break;
		case 3:cout<<"30";	break;
		case 4:cout<<"30";	break;
		case 5:cout<<"31";	break;
		case 6:cout<<"30";	break;
		case 7:cout<<"31";	break;
		case 8:cout<<"31";	break;
		case 9:cout<<"31";	break;
		case 10:cout<<"30";	break;
		case 11:cout<<"30";	break;
		case 12:cout<<"31";	break;
		default:cout<<"Sorry there are only twelve months in one year";
		
		
	}
}
