#include <stdio.h>


int main()
{
	FILE *fp;
	char c;
	// Open file
	fp = fopen("tax.csv", "r");
	if (fp == NULL)
	{
		printf("Cannot open file \n");
		return 0;
	}

	// Read contents from file
	c = fgetc(fp);
	while (c != EOF)
	{
		printf("%c",c);
		c = fgetc(fp);
	}

	fclose(fp);
	return 0;
}

