#include<iostream>
using namespace std;
int main() {
	int num,units,tens;
	cout<<"Enter a number(1 to 99):";	cin>>num;
	units=num%10;
	//tens=num/10*10;
	tens=num-units;
	if(num>99)
		cout<<"Invalid number";
	if(num>19){
		switch(tens) {
		case 10:
		cout<<"Ten";	break;
		case 20:
		cout<<"Twenty";	break;
		case 30:
		cout<<"Thirty";	break;
		case 40:
		cout<<"Fourty";	break;
		case 50:
		cout<<"Fifty";	break;
		case 60:
		cout<<"Sixty";	break;
		case 70:
		cout<<"Seventy";	break;
		case 80:
		cout<<"Eighty";	break;
		case 90:
		cout<<"Ninty";	break;
}
}
	if(num>10&&num<=19){
		switch(num)
		{
			case 11: cout<<"Eleven";		break;
			case 12: cout<<"Twelive";		break;
			case 13: cout<<"Thirteen";		break;
			case 14: cout<<"Fourteen";		break;
			case 15: cout<<"Fifteen";		break;
			case 16: cout<<"Sixteen";		break;
			case 17: cout<<"Seventeen";		break;
			case 18: cout<<"Eighteen";		break;
			case 19: cout<<"Ninteen";		break;
		
	}
	}
	else if(num<0||num>19){
		switch(units){
			case 1:	cout<<"One";		break;
			case 2:	cout<<"Two";		break;
			case 3:	cout<<"Three";		break;
			case 4:	cout<<"Four";		break;
			case 5:	cout<<"Five";		break;
			case 6:	cout<<"Six";		break;
			case 7:	cout<<"Seven";		break;
			case 8:	cout<<"Eight";		break;
			case 9:	cout<<"Nine";		break;
	}
}
return 0;
}
