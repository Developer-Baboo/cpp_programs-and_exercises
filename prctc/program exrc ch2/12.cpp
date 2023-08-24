#include<iostream>
using namespace std;//3.2300347222222222222222222222221
int main(){char ch=156;
	float decpounds;
	int pounds;
	cout<<"Enter Decimal pounds=";
	cin>>decpounds;
	pounds=static_cast<int>(decpounds);
	float decfrac=decpounds-pounds;
	float sh=decfrac*20;
	int shl=static_cast<int>(sh);
	int pen=(sh-shl)*12;
	cout<<"Eqivalent in old notation="<<ch<<pounds<<'.'<<shl<<'.'<<pen;
	return 0;
}
