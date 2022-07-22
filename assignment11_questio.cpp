#include<stdio.h>
#include <windows.h>

COORD coord={0,0};

void gotoxy(int x,int y)
{
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main(void)
{
	FILE *fp;
	fp = fopen("File01.txt","r");
	int X;
	int Y;
	char C;
	do 
	{ 
	fscanf(fp, "%d %d %c\n", &X, &Y, &C);
	gotoxy(X,Y);
	printf("%c",C);
} while( ! feof(fp) );
}
