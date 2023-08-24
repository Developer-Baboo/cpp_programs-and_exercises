#include<iostream>
using namespace std;
char ch = 'a';		// global varible ch

void getachar () {		// getachar() accesses ch
	ch = getch();}
void putachar() {		//putachar () accesses ch
	cout<<ch;
}
int main() {
	cout<<"Enter a phrase"<<endl;
	while(ch!='\r') 	// main() accesses
	{
	getachar();
	putachar ();
	}
	cout<<endl;
	return 0;
 }
