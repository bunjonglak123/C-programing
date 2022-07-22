#include<stdio.h>
int main (){
	char ch;
	FILE *file_pointer;
	file_pointer = fopen("Test01.txt","r");
if (file_pointer == NULL) {
	printf("Error in opening file");
	return(-1); }
	do { ch = fgetc(file_pointer);
printf("%c", ch);
} while( ! feof(file_pointer) );
	return 0;
}
