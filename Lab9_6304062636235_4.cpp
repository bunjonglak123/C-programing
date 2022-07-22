#include<stdio.h>

int main (){

	char ch;
	FILE *file_pointer;
	file_pointer = fopen("test project.txt","r");
if (file_pointer == NULL) {
	printf("Error in opening file");
	return 0; }

	int rate[0],it[0];
	do { fscanf(file_pointer, "%d %d ", &rate[0],&it[0]);

		printf("%d ",rate[0]);
		printf("%d ",it[0]);
	// printf("%d ",Y);

	 
	 }
 while( ! feof(file_pointer) );

fclose(file_pointer);
	return 0;
}


