#include<iostream>
using namespace std;
int main(){
	int TotalRows;
	cout<<"enter the number of rows you want to to make the diamond of:"<<endl; cin>>TotalRows;
	int Rows,ColSpace,ColStar;
	for(Rows=1;Rows<=TotalRows;Rows++){
		for(ColSpace=TotalRows-Rows;ColSpace>=1;ColSpace--)
	{
		cout<<"*";
	}
	{
		cout<<" ";
	}
	cout<<endl;
	}
for(Rows=TotalRows;Rows>=1;Rows--){
	for(ColSpace=1;ColSpace<=TotalRows-Rows;ColSpace++)
{
	cout<<"*";
}
{
	cout<<"*0";
}
cout<<endl;
}
return 0;	
}
