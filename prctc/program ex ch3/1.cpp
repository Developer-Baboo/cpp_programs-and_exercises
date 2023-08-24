#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,k;
	cout<<"Enter a number:";cin>>a;
			for(k=1;k<=200;k++){
			if(k==11||k==21||k==31||k==41||k==51||k==61||k==71||k==81||k==91||k==101||k==111||k==121||k==131||k==141||k==151||k==161||k==171||k==181||k==191||k==201)
			cout<<endl;			
			cout<<setw(5)<<a*k<<setw(5);
				
			}
	return 0;
}
