#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

bool gameover = false;
int x,y,fruitX,fruitY;
int score;

const int width = 40;
const int height = 20;

enum eDirection{
	STOP = 0,LEFT,RIGT,UP,DOWN
};

eDirection dir;

void draw(){
	for(int i = 0; i<=width; i++)
	cout<<"#";
	
	cout<<endl;
	
	for(int i= 0;i<=height;i++){
		for(int j = 0; j<=width;j++){
			if(j==0) cout<<"#";
			else if(i==y&&j==x) cout<<"O";
			else if(fruitX==j&&fruitY==i) cout<<"F";
			else cout<<" ";
			
			if(j==width-1) cout<<"#";
		}
		cout<<endl;
	}
	
	
	for(int i = 0; i<=width; i++)
	cout<<"#";
	
	cout<<"\nScore: "<<score;
}

void input(){
	switch(getch()){
		case 'a': x--; break;
		case 'd': x++; break;
		case 'w': y--; break;
		case 's': y++; break;
	}
}
void logic(){
	
}

int main(){
	srand(time(0));
	x = width/2;
	y = height/2;
	
	fruitX = rand() % width;
	fruitY = rand() % height;
	while(gameover != true){
		system("cls");
		draw();
		input();
	}
}
