#include<iostream>
using namespace std;
// find average of old plus new data
float getavg(float newdata) {
	static float totall = 0;		// static variable are initialized
	static int count = 0;
	count++;
	totall +=newdata;
	return totall / count ;	// return the new average
}
	
	int main() {
		float data=1,avg;
		while(data!=0)
		{
			cout<<"Enter a number";
			cin>>data;
			avg=getavg(data);
			cout<<"New average is:"<<avg<<endl;
		}
		return 0;
}
