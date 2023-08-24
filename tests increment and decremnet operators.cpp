#include<iostream>
//Tests the increment and decrement operators:
using namespace std;
int main()
{
int m = 44, n = 66;
cout << "m = " << m << ", n = " << n << endl;
++ m;
-- n;
cout << "m = " << m << ", n = " << n << endl;
m++;
n--;
cout << "m = " << m << ", n = " << n << endl;
return 0;
}
