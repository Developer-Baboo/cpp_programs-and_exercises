#include<iostream>
using namespace std;
int main() {
	int arr [3][4];
	for(int x=1;x<=3;x++){
	for(int y=1;y<=4;y++){
	cout<<"Input values of matrix:";
	cin>>arr[x][y];
}
}
	cout<<"Matrix is"<<endl;
	for(int x=1;x<=3;x++){
	for(int y=1;y<=4;y++){
		cout<<arr[x][y]<<"  ";
}
	cout<<endl;
}
}
