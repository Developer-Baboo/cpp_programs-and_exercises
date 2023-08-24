#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "> ";
        }
        for(int c=1;c<=1;c++){
        	cout<<"=";
		}
		for(int v=25;v>=i;v--)
		{
			cout<<"> ";
		}
        cout << "\n";
    }
    return 0;
}
