#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter a positive integer: ";
    cin >> n;
    //cout << "Factors of " << n << " are: " <<i<< endl;  
    for(i = 1; i <= n; ++i)
    {
        if(n % i == 0)
		cout << "Factors of " << n << " are: " <<i<< endl;
}
    return 0;
}
