#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

// Functions declarations

void gotoxy(int x, int y);
void drawContainer(int height, int width);
void asciiValues();

int main()
{	
	char keyInput;
	const int WIDTH = 118;
	const int HEIGHT = 28;
	int x_init = 5;
	int y_init = 5;
   	drawContainer(HEIGHT,WIDTH);
   	gotoxy(x_init,y_init);
   	printf("%c",254);
   	cin >> keyInput;
   	getchar();
   	switch(keyInput)
   	{
   		case 'w': 
		   	gotoxy(x_init,y_init-1);
   		   	printf("%c",254);
   		break;
   		case 'a':
   		break;
   		case 's':
   		break;
   		case 'd':
   		break;
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


