#include<iostream>
using namespace std;
struct Distance{
	int feets;
	double inches;
};
struct Cube{
	Distance height;
	Distance width;
	Distance depth;
	Distance volume;
};
int main(){
	Cube cube1;
	cube1.height.feets=5;
	cube1.height.inches=9.5;
	cube1.width.feets=4;
	cube1.width.inches=2.4;
	cube1.depth.feets=6;
	cube1.depth.inches=2.5;
	cube1.volume.feets=cube1.width.feets*cube1.height.feets*cube1.depth.feets;
	cube1.volume.inches=cube1.width.inches*cube1.height.inches*cube1.depth.inches;
	//cube1.height.feets*cube1.width.feets*cube1.depth.feets)
	//*(cube1.height.inches*cube1.width.inches*cube1.depth.inches);
	cout<<cube1.height.feets;
	cout<<cube1.height.inches;
	cout<<cube1.width.feets;
	cout<<cube1.width.inches;
	cout<<cube1.depth.feets;
	cout<<cube1.depth.inches<<endl;
	cout<<"volume="<<cube1.volume.feets<<" "<<cube1.volume.inches;
	//cout<<"\n"<<volume;
	return 0;
}
