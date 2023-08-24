#include<iostream>
using namespace std;
int main() {
	int arr[5] [3];
	cout<<"An Integar double dimentional array...."<<endl;
	cout<<"Enter elements"<<endl;
	for(int r=0;r<5;r++)
	for(int c=0;c<3;c++)	{
		cout<<"Enter array[" <<r<< "]["<<c<<"]:";
		cin>>arr[r] [c];
	}
	cout<<"Elements in array are:"<<endl;
	for(int r=0;r<5;r++) {
		for(int c=0;c<3;c++)
		cout<<arr[r][c]<<":::";
		cout<<endl;	
	}
}
