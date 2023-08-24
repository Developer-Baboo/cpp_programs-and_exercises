#include<iostream>
using namespace std;
int main() {
	char ch[4][5];
	int m,s;
	cout<<"character array are ..."<<endl;
	cout<<"Enter characters in array";
	cout<<endl;
	for(m=1;m<4;m++)
		for(s=1;s<5;s++)
		{
		cout<<"Enter arr[ "<<m<<" ]:";
		cin>>ch[m][s];
	}
	cout<<"The elements in array are:";
	cout<<endl;
	for(m=0;m<4;m++)
		for(s=1;s<=5;s++)
		{
			cout<<ch[m][s]<<" ";
		}
	return 0;	

}
