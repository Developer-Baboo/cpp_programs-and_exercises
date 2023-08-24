#include<iostream>
using namespace std;int main() {
int  x,y,sum=0;
for(int x=1;x<=5;x++) {
y=x*x;
cout<<y<<endl;
y+=y;
}
cout<<"sum is:"<<y;	
return 0;}
