#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a,b,c,d,e,f;
char ch,ch1=46,ch2=156,ch3;
do{
	cout<<"Enter first amount: "<<ch2;cin>>a>>ch1>>b>>ch1>>c;
	cout<<"Enter operator: ";cin>>ch3;
	cout<<"Enter second amount : "<<ch2;cin>>d>>ch1>>e>>ch1>>f;
	switch(ch3){
	case '+':
	if(b+e==19&&c+f>=12)
	cout<<"Total is: "<<ch2<<(1+(a+d))<<ch1<<((1+(b+e))-20)<<ch1<<((c+f)-12);
	else if(b+e>=20&&c+f>=12)
	cout<<"Total is: "<<ch2<<(1+(a+d))<<ch1<<((1+(b+e))-20)<<ch1<<((c+f)-12);
	else if(c+f>=12)
	cout<<"Total is: "<<ch2<<(a+d)<<ch1<<(1+(b+e))<<ch1<<((c+f)-12);
	else if(b+e>=20)
    cout<<"Total is: "<<ch2<<(1+(a+d))<<ch1<<((b+e)-20)<<ch1<<(c+f);
	else
	cout<<"Total is: "<<ch2<<(a+d)<<ch1<<(b+e)<<ch1<<(c+f);break;
	case '-':
	if(a>=d&&b>=e&&c>=f)
	cout<<"Total is: "<<ch2<<(a-d)<<ch1<<(b-e)<<ch1<<(c-f);
	else if(a>d&&b<=e&&c<f)
	cout<<"Total is: "<<ch2<<((a-d)-1)<<ch1<<(((b-e)-1)+20)<<ch1<<((c-f)+12);
	else if(a>d&&b<e&&c>=f)
	cout<<"Total is: "<<ch2<<((a-d)-1)<<ch1<<((b-e)+20)<<ch1<<(c-f);	
	else if(a==d&&b>e&&c<f)
	cout<<"Total is: "<<ch2<<(a-d)<<ch1<<((b-e)-1)<<ch1<<((c-f)+12);
	}
	cout<<"\nDo you wish to continue (y/n)? ";
	ch=getche();
	cout<<endl;
}while(ch=='y');
	return 0;
}
