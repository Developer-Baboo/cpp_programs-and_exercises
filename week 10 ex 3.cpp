#include<iostream>
#include<conio.h>
using namespace std;
long hms_to_sec(int hours,int min,int sec){
	int secs=hours*3600+min*60+sec;
	return secs;
}
int main(){
	char ch;
	int hours,min,sec,secs;
	do{
	cout<<"Enter Hours:";cin>>hours;if(hours>=24){
	cout<<endl<<"Wrong Value Renter"<<endl<<endl;
	continue;
	}
	cout<<"Enter Min:";cin>>min;if(min>=60){
	cout<<endl<<"Wrong Value Renter"<<endl<<endl;
	continue;
	}
	cout<<"Enter sec:";cin>>sec;
	secs=hms_to_sec(hours,min,sec);
	cout<<"The Value in Seconds is:"<<secs<<endl;	
	ch=getch();
	cout<<endl;
	}while(ch!='0');
	cout<<"Exiting Program";
	return 0;
}
