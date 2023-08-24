#include<iostream>
using namespace std;
struct Distance{
	int feets;
	double inches;
};
struct box{
Distance height;
Distance width;
};
int main(){
box box1;
box1.height.feets=5;	
box1.height.inches=9.5;	
box1.width.feets=4;	
box1.width.inches=2.4;
cout<<box1.height.feets;
cout<<box1.height.inches;
cout<<box1.width.feets;
cout<<box1.width.inches;
	
}
