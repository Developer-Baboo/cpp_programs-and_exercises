#include<iostream>
struct distance{
	int feet;
	float inches;
};
struct Cube{
	distance height;
	distance width;
	distance depth;
	distance volume;
};
using namespace std;
int main(){
	int a;
	float b;
	Cube cube1;
	cube1.height.feet;
	cube1.height.inches;
	cube1.width.feet;
	cube1.width.inches;
	cube1.depth.feet;
	cube1.depth.inches;
	cout<<"Height of cube in feet(s):";cin>>cube1.height.feet;
    cout<<"Height of cube in inches:";cin>>cube1.height.inches;
    cout<<"Width of cube in feet(s):";cin>>cube1.width.feet;
    cout<<"Width of cube in inches:";cin>>cube1.width.inches;
    cout<<"Depth of cube in feet(s):";cin>>cube1.depth.feet;
    cout<<"Depth of cube in inches:";cin>>cube1.depth.inches;
	cube1.volume.feet=cube1.height.feet*cube1.width.feet*cube1.depth.feet;
	cube1.volume.inches=cube1.height.inches*cube1.width.inches*cube1.depth.inches;
	
	a=cube1.height.inches*cube1.width.inches*cube1.depth.inches;
	a=(int)a; 
	b=(cube1.volume.inches)-a;
	cout<<endl<<endl;
	cout<<"Volume of cube in feet(s):"<<cube1.volume.feet+(a/12)<<endl;
	cout<<"Volume of cube in inches:"<<(a%12)+b;
	return 0;
}
