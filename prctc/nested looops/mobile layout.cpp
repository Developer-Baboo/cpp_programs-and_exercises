#include<iostream>
using namespace std;
int main(){
	for(int a=1;a<=16;a++)
	{
		for(int b=1;b<=5;b++)
		{
			if(b==1&&a!=1&&a!=10&&a!=16&&a!=9)
			cout<<".";
			if(a==1)
		    cout<<".";
			if(a==10)
			cout<<".";
			if(a==16)
			cout<<".";
			if(a==9&&b==3)
			cout<<"NOKIA";
			if(a==11&&b==2)
			cout<<"/";
			if(a==11&&b==3)
			cout<<"=";
			if(a==11&&b==4)
			cout<<"\\";
			if(a==12&&b==2)
			cout<<"1";
			if(a==12&&b==3)
			cout<<"2";
			if(a==12&&b==4)
			cout<<"3";
			if(a==13&&b==2)
			cout<<"4";
			if(a==13&&b==3)
			cout<<"5";
			if(a==13&&b==4)
			cout<<"6";
			if(a==14&&b==2)
			cout<<"7";
			if(a==14&&b==3)
			cout<<"8";
			if(a==14&&b==4)
			cout<<"9";
			if(a==15&&b==2)
			cout<<"*";
			if(a==15&&b==3)
			cout<<"0";
			if(a==15&&b==4)
			cout<<"#";
			if(b==2&&a!=1&&a!=9&&a!=10&&a!=16&&a!=11&&a!=12&&a!=13&a!=14&&a!=15)
			cout<<".";
			if(b==3&&a!=1&&a!=9&&a!=10&&a!=16&&a!=11&&a!=12&&a!=13&a!=14&&a!=15)
			cout<<".";
			if(b==4&&a!=1&&a!=9&&a!=10&&a!=16&&a!=11&&a!=12&&a!=13&a!=14&&a!=15)
			cout<<".";
			if(b==5&&a!=1&&a!=9&&a!=10&&a!=16)
			cout<<".";
			cout<<"  ";
		}
	cout<<endl;
	}	
	return 0;
}
