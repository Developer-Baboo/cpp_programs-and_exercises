#include<iostream>
#include<cstring>		// for starcopy
using namespace std;
int main() {
	char str1[]="Tiger,tiger,burning bright\n"
	"In the forests\ of the night";
	int MAX;		//size of str2 buffer
	char str2[MAX];	// empty string
	strcpy(str2,str1);		//copy str1 to str2
	cout<<str2<<endl;		//display str2
	return 0;
	
	
}
