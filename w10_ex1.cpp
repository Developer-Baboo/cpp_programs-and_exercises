#include<iostream>
using namespace std;
float FtoC(float f){
float c=(f-32)*5/9;
return c;	
}
int main(){
	float c,f;
	cout<<"Enter Temperature in Fahrenheit:";cin>>f;
	c=FtoC(f);
	cout<<"Temperature in Celsius is:"<<c;
	return 0;
} 
