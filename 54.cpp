#include <iostream>
using namespace std;
int main()
{
    char name;
    int password;
    cout << "Enter the name: "; 
	cin >> name;
    cout << " Enter your password: "<<endl; 
	cin >> password;
    if (name == 'GG') {
        if (password == 1346) {
            cout << "Login successful"<<endl;
        }
        else {
            cout << "Incorrect PASSWORD, Try again."<<endl;
        }
    }
    else {
        cout << " Incorrect Login Details, Try again."<<endl;
    }
}
