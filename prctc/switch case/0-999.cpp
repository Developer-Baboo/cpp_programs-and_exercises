#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a;
	char ch;
	do{
		cout<<"Enter number (0-999):";cin>>a;
		int u=(a/100)*100;
		int v=a%100;
		int x=(a%100)-(a%10);
		int y=a%10;
		switch(a){
		case 0:cout<<"Zero";break;
		case 11:cout<<"Eleven"; break;
		case 12:cout<<"Twelve"; break;
		case 13:cout<<"Thirteen"; break;
		case 14:cout<<"Fourteen"; break;
		case 15:cout<<"Fifteen"; break;
		case 16:cout<<"Sixteen"; break;
		case 17:cout<<"Seventeen"; break;
		case 18:cout<<"Eighteen"; break;
		case 19:cout<<"Nineteen"; break;
		default:
			switch(u){
				case 100:cout<<"One Hundred ";break;
				case 200:cout<<"Two Hundred ";break;
				case 300:cout<<"Three Hundred ";break;
				case 400:cout<<"Four Hundred ";break;
				case 500:cout<<"Five Hundred ";break;
				case 600:cout<<"Six Hundred ";break;
				case 700:cout<<"Seven Hundred ";break;
				case 800:cout<<"Eight Hundred ";break;
				case 900:cout<<"Nine Hundred ";break;
			}
			if(v<=19&&v>=11){
		switch(v){
		case 11:cout<<"Eleven"; break;
		case 12:cout<<"Twelve"; break;
		case 13:cout<<"Thirteen"; break;
		case 14:cout<<"Fourteen"; break;
		case 15:cout<<"Fifteen"; break;
		case 16:cout<<"Sixteen"; break;
		case 17:cout<<"Seventeen"; break;
		case 18:cout<<"Eighteen"; break;
		case 19:cout<<"Nineteen"; break;
		}
			}
		else{
			switch(x){
	case 10 : cout<<"Ten ";break;
	case 20 : cout<<"Twenty ";break;
	case 30 : cout<<"Thirty ";break;
	case 40 : cout<<"Forty ";break;
	case 50 : cout<<"Fifty ";break;
	case 60 : cout<<"Sixty ";break;
	case 70 : cout<<"Seventy ";break;
	case 80 : cout<<"Eighty ";break;
	case 90 : cout<<"Ninety ";break;}
		switch(y){
		case 1:cout<<"One"; break;
		case 2:cout<<"Two"; break;
		case 3:cout<<"Three"; break;
		case 4:cout<<"Four"; break;
		case 5:cout<<"Five"; break;
		case 6:cout<<"Six"; break;
		case 7:cout<<"Seven"; break;
		case 8:cout<<"Eight"; break;
		case 9:cout<<"Nine"; break;	
		default: 
		continue;
		}
		}} 
		cout<<endl;
		ch=getch();
	}while(ch!='\r');
	return 0;
}
