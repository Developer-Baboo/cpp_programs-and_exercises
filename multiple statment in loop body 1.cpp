#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int numb = 1; numb<=10; numb++)
	{
	cout<<setw(4)<<numb;
	int square = numb*numb;
	cout<<setw(10)<<square<<endl;
	}
	return 0;
}
