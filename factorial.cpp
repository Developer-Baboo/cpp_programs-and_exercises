// factor.cpp
// calculates factorials, demonstrates FOR loop
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
char ch;
do{
unsigned int numb;
int j;
unsigned long fact=1; //long for larger numbers
cout << "\nEnter a number: ";
cin >> numb; //get numberfor(int j=numb; j>0; j--) //multiply 1 by
fact *= j; //numb, numb-1, ..., 2, 1
cout << "Factorial is " << fact << endl;
cout<<"do you want to continue";
ch=getche();
}
while(ch=='y');
return 0;
}
