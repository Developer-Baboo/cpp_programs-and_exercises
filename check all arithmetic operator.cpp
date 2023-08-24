// divdo.cpp
// demonstrates DO loop
#include <iostream>
using namespace std;
int main()
{
long dividend, divisor;
char ch;
do //start of do loop
{ //do some processing
cout << "Enter dividend: "; cin >> dividend;
cout << "Enter divisor: "; cin >> divisor;
cout << "Quotient is " << dividend / divisor<<endl;
cout << "remainder is "<< dividend % divisor<<endl;
cout << "\nDo another? (y/n): "; //do it again?
cin >> ch;
}
while( ch != 'n' ); //loop condition
return 0;
}
