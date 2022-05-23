#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

// Functions declarations ------------------------------------------------

void gotoxy(int x, int y);
void set_cursor(bool visible);
void drawContainer(int height, int width);
void asciiValues();
void direction(char dir);
void moving(char dir);

// Global variables ------------------------------------------------------

const int WIDTH = 118;
const int HEIGHT = 28;
const int CHARACTER = 2;
int x_init = 5;
int y_init = 5;
char keyInput;

// Main function ---------------------------------------------------------

int main()
{	
	set_cursor(false);
   	drawContainer(HEIGHT,WIDTH);
   	gotoxy(x_init,y_init);
   	printf("%c",CHARACTER);
   	
   	while(keyInput != 'q')
   	{
   		keyInput = getch();
   		if(y_init == HEIGHT || y_init == 1) keyInput = 'q';
   		if(x_init == WIDTH) x_init = 2;
		if(x_init == 1) x_init = WIDTH;    
		Sleep(100);
   		switch(keyInput)
   		{
   			case 'w': 
			   	direction('u');
   				moving('u');
   			break;
   			case 'a': direction('l');
   				break;
   			case 's': direction('d');
   				break;
   			case 'd': direction('r');
   				break;
		}	
	}
	
   	getch();
   	return 0;
}

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void set_cursor(bool visible){
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = visible;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void drawContainer(int height, int width)
{
	for (int i=1;i<=height;i++)
	{
		gotoxy(1,i);
   		printf("%c",219);
   		gotoxy(width,i);
   		printf("%c",219);
	}
	for (int i=1;i<=width;i++)
	{
		gotoxy(i,1);
   		printf("%c",219);
   		gotoxy(i,height);
   		printf("%c",219);
	}
}

void asciiValues()
{
	for (int i=0;i<256;i++)
   	{
   		printf("%d: %c\n",i,i);
   	}
}

void direction(char dir)
{
	gotoxy(x_init,y_init);
  	printf("%c",255);
   	if(dir == 'u') gotoxy(x_init,y_init-=1);
   	if(dir == 'd') gotoxy(x_init,y_init+=1);
   	if(dir == 'l') gotoxy(x_init-=1,y_init);
   	if(dir == 'r') gotoxy(x_init+=1,y_init);
   	printf("%c",CHARACTER);
}

void moving(char dir)
{
	if(dir == 'u') 
	{
		while(keyInput == 'w')
		{
			direction('u');
			Sleep(100);
		}	
	}
   	if(dir == 'd') gotoxy(x_init,y_init+=1);
   	if(dir == 'l') gotoxy(x_init-=1,y_init);
   	if(dir == 'r') gotoxy(x_init+=1,y_init);
}


