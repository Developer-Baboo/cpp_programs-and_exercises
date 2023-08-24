#include <iostream> 
using namespace std;
// Function prototype (declaration)
int add(int, int, int );
int main()
{
    int num1, num2,num3,sum;
    cout<<"Enters First numbers to add: "<<endl;		cin>>num1;
    cout<<"Enter second number to add:"<<endl;		cin>>num2;
    cout<<"Enter third number to add:"<<endl;			cin>>num3;
    // Function call
    sum = add(num1, num2,num3);
    cout << "Sum = " << sum;
    return 0;
}
// Function definition
int add(int a, int b,int c)
{
    int add;
    add = a + b + c;
    // Return statement
    return add;
}
