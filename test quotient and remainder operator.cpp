#include<iostream>
using namespace std;
//Tests quotient and remainder operators:
int main()
{
int m = -14, n = 5, q = m/n, r = m%n;
cout << "m = " << m << endl;
cout << "n = " << n << endl;
cout << "q = " << q << endl;
cout << "r = " << r << endl;
cout << "q*n + r = " << "(" << q << ")*(" << n + )" <<
<< r << " = " << q*n + r << " = " << m << endl;
return 0;
}
