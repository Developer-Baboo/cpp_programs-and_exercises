//Write a program to calculate the total expenses. Quantity and price per 
//item are input by the user and discount of 10% is offered if the expense 
//is more than 5000.
#include<iostream>
using namespace std;


int main()
{
	int totalexp, qty, price, discount;

	cout<<"Enter quantity:";
	cin>>qty;
	cout<<"Enter price:";
	cin>>price;

	totalexp=qty*price;

	if(totalexp>5000)
	{
		discount=(totalexp*0.1);
		totalexp=totalexp-discount;
	}

	cout<<"Total Expense is  Rs. "<<totalexp;


	return 0;
}
