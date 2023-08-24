#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
using namespace std;
bool gameOver;
const int width=20;
const int height=20;
int x,y,fruitX,fruitY,score;
int tailX[100],tailY[100];
int ntail;
enum cDirection{STOP=0,LEFT,RIGHT,UP,DOWN};
cDirection dir;
void setup()
{
	gameOver= false;
	dir =STOP;
	x=width/2;
	y=height/2;
	fruitX= rand() % width;
	fruitY= rand() % height;
	score =0;
}
void draw()
{
	system("cls");//system("clear");
	for(int i=0;i<width+2;i++)
	cout<<"#";
	cout<<endl;
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++)
	{
	if(j==0)
	cout<<"#";  
	if(i==y && j==x)
	cout<<"o";
	else if(i==fruitY && j==fruitX)
	cout<<"F";
	else
	{bool print=false;
		for(int k=0;k<ntail;k++)
		{
			if(tailX[k]==j && tailY[k]==i)
			{
				cout<<"o";
				print =true;
			}
			if(!print)
			cout<<" ";
		}
	 cout<<" ";}
	if(j==width-1)
	cout<<"#";
	
}
for(int i=0;i<width+2;i++)
	cout<<"#";
	cout<<endl;
	cout<<"score="<<score<<endl;
}
void Input()
{

	if(_kbbit())
	
		switch(getch())
		{
			case 'a';
			dir=LEFT;
			case'd';
			dir=RIGHT;
			case'w';
			dir =UP;
			case 'l';
			dir=LEFT;
			break;
			case'x';
			gameOver=true;
			break;
		}
	
	}
}
void logic()
{
	int prevX=tail[0];
	int prevY=tail[0];
	int prev2X,prev2Y;
	tailX[0]=x;
	tailY[0]=y;
	for(int i=1;i<nTail;i++){
		prev2X=tailX[i];
		prev2y=taily[i];
		tail[i]=prevX;
		tail[i]=prevY;
		prevX=prev2X;
		prevY=prev2Y;
	}
	switch(dir)
		{
			case LEFT;
			x--;
			break;
			case RIGHT;
			x++;
			break;
			case UP;
			y++;
			break;
			case DOWN;
			y--;
			break;
			default:
			break;
		}
		if(x>width || x<0 ||y>height || y<0)
		gameOver=true; 
		for(int i=0;i<ntail;i++)
		if(tailX[i]==x && tailY[i]==y)
			gameOver=true;
		if(x==fruitX && y==fruitY)
		
		{
			score=10;
			fruitX= rand() % width;
			fruitY= rand() % height;
			ntail++;
			
		}
		
}

int main(){
	setup()
	while(!gameOver)
	{
		draw();
		input();
		logic();
		
	}
}
