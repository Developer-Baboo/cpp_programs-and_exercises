#include<iostream>
using namespace std;
int main() {
	int x,y,total=0;
	for(x=1;x<=5;x++)
	{
		y=x+x;
		cout<<y<<endl;
		total+=y;
	}
	cout<<"Total is:"<<total<<endl;
}
