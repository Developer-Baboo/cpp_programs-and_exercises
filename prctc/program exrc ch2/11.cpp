#include<iostream>
#include<iomanip>
using namespace std;
int main()
{cout.setf(ios::left);
cout<<"Last Name"<<setw(15)<<setiosflags(ios::left)<<"First Name"<<setw(20)<<"Street Adress"<<setw(20)<<"Town"<<setw(20)<<"State"<<endl
<<"...................................................."<<endl<<endl
<<"Jones"<<setw(15)<<"Bernard"<<setw(20)<<"109 Pine Lane"<<setw(20)<<"Littletown"<<setw(20)<<"MI"<<endl
<<"O'Brain"<<setw(15)<<"Coleen"<<setw(20)<<"42 E. 99th Ave."<<setw(20)<<"Bigcity"<<setw(20)<<"NY"<<endl
<<"Wong"<<setw(15)<<"Harry"<<setw(20)<<"121-A Alabama St."<<setw(20)<<"Lakevalley"<<setw(20)<<"IL"<<endl;
	
	
	return 0;
}
