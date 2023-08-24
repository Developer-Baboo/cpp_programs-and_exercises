#include<iostream>
using namespace  std;
	struct Distance{			//creating sturcture
		int feets;
		double inches;
	};
	struct Box{					// Creating box structure by using distance structure
	Distance height ;			//Creating box structure for height
	Distance width ;			//Creating box structure for widht
	};
	int main(){
		Box box1;				// declaring one variables of box structure
	box1.height.feets=5;			// adding value for height
	box1.height.inches=9.5;		// adding value for height
	box1.width.feets=4;			// adding value for width
	box1.width.inches=2.4;		// adding value for width
	cout<<box1.height.feets<<endl;	//printing the heigth of box
	cout<<box1.height.inches<<endl;	//printing the heigth of box	
	cout<<box1.width.feets<<endl;		//printing the width of box	
	cout<<box1.width.inches<<endl;	//printing the width of box
}

