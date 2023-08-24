#include<iostream>
using namespace std;
int main () 
{
int age;
cout<<"How old are you:";
cin >> age;
cout << "In 10 years, you will be " << age + 10 << ".\n";
//Example 2.2, page 32
//Schaum's Outline of Programming with C++ by John R. Hubbard
//Copyright McGraw-Hill, 1996
char first, last;
cout << "Enter your initials:\n";
cout << "\tFirst name initial:";
cin >> first;
cout << "\tLast name initial:";
cin >> last;
cout << "Hello, " << first << ". " << last << ".!\n";
return 0;
}
