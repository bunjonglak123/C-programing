#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(void)
{ struct
{ 	char name[30];
	char id[20];
	char art[30];
	char date[30];
	char com[30];
	int price[30];
}music;
printf("Welcome to CS-KMUTNB MUSIC Shop\n");
char  fname[80],num[20];
FILE *fptr;
do {
printf("Please enter name of file:");
gets(fname);
if ( (fptr=fopen(fname,  "wb" ))== NULL )
{
printf("Error in open file");
return 0;
} 
printf("Please enter the product code:");
gets( music.name);
printf("Please enter the product title:");
gets( music.id );
printf("Please enter the name of artist:");
gets( music.art );
printf("Please enter the issue date:");
gets( music.date );
printf("Please enter the company:");
gets( music.com );
printf("Please enter the price:");
gets( num );
fwrite(&music, sizeof(music), 11, fptr);
printf("Do you want to continue (‘y/n’):");
} 
while( tolower(getche()) == 'y' );
printf("THANK YOU.\n");
printf("THE CS-KMUTNB MUSIC Shop IS CLOSING.\n");
printf("NOW, WE ARE WRITING THE REMAINING GOODS FOR TOMORROW!\n");
fclose(fptr);
getch();
return 0;
} 

