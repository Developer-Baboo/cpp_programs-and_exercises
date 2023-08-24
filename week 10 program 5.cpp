#include<iostream>
using namespace std;
float ibstokg(float pounds) {
	return 0.453592*pounds;
}
	int main(){
		float ibs;
		cout<<"Enter your weight in pounds";
		cin>>ibs;
		cout<<"your weight in kilograms is:"<<ibstokg(ibs)<<endl;
		return 0;
	}
