#include<iostream>
using namespace std;
int main() {
	int z=1;
	int h=0;
	for(int i=1;i<=10;i++){
		z*=2;
		h+=100;
	}
	
	cout<<z/h-h/z;
}

