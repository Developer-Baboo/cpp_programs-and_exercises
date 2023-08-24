#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,f;
for(a=1;a<=10;a++){
	cout<<"<";
for(b=2;b<=a;b++){
	cout<<"<";}
	cout<<endl;
}
for(c=1;c<=10;c++){
	if(c==b-a){
	cout<<"-";}
for(d=10;d>=1;d--){
	for(f=1;f<=d;f++){
	cout<<">";}
	cout<<endl;
}

}}
