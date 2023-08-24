#include<iostream>
using namespace std;
 int main(){
 	for(int a=1;a<=10;a++)
 	{
 		for(int n=1;n<=10;n++)
 		{
 			cout<<" ";
		 }
 		for(int b=1;b<=20;b++)
 		if(a<=9 && a>1 && b>1 && b<=19)
 		{
 		cout<<" ";
 		}
		 else
		 {
		 	cout<<"#";
		 }
		 cout<<endl;
	 }
 }
