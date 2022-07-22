#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
	FILE *fp;
	char c;
	// Open file
	fp = fopen("5ways.txt", "r");
	if (fp == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}

	// Read contents from file
	c = fgetc(fp);
	while (c != EOF)
	{
		printf ("%c", c);
		c = fgetc(fp);
	}

	fclose(fp);
	return 0;
}

