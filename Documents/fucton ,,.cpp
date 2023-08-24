#include<iostream>
using namespace std;

struct Distance{
	int feet;
	float inches;
}; 
Distance addeng(Distance , Distance);
void engdsp(Distance);
int main(){
	Distance d1,d2,d3;
	cout<<"enter feets:"; cin>>d1.feet;
	cout<<"enter inches:"; cin>>d1.inches;
	cout<<"enter feets:"; cin>>d2.feet;
	cout<<"enter feets:"; cin>>d2.inches;
	d3=addeng(d1,d2);
	cout<<endl;
	engdsp(d1); cout<<"+";
	engdsp(d2); cout<<"=";
	engdsp(d3); cout<<endl;
}
Distance addeng(Distance dd1, Distance dd2)
{
	Distance dd3;
	dd3.inches=dd1.inches+dd2.inches;
	dd3.feet=0;
	if(dd3.inches>=12.0)
	{
		dd3.inches-=12.0;
		dd3.feet++;
	}
	dd3.feet=dd1.feet+dd2.feet;
	return dd3;
 } 
 void engdsp(Distance dd)
 {
 	cout<<endl;
 	cout<<dd.feet<<"\'"<<dd.inches<<"\"";
 }
