//Write a program to determine whether the seller has made profit or 
//incurred loss. Also determine how much profit he made or loss he 
//incurred. Cost price and selling price of an item is input by the user.

#include<iostream>
using namespace std;
int main()
{
	int cp,sp,result;
	cout<<"Enter cost price of item : ";
	cin>>cp;
	cout<<"Enter selling price of item : ";
	cin>>sp;
	result=sp-cp;
	if(result>0)
		cout<<"Profit : "<<result;
	else
		if(result<0)
    			cout<<"Loss : "<<-(result);
		else
			cout<<"No profit no loss";

	//cin.ignore();
	//cin.get();
	return 0;
}
