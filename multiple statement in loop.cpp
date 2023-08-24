#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	for(int numb=1;numb<=10;numb++)
	{
		cout<<setw(4)<<numb;
		int cube = numb*numb*numb;
		cout<<setw(6)<<numb<<endl;
		return 0;
	}
}
