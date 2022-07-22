#include<stdio.h>
#include<string.h>


int main(void)
{
	FILE *fp;
	fp = fopen("Test2.txt","r");
	char c[20];
	int i,len=0;
	c[20] = fgetc(fp);
	for( i=0; c!='\0';i++)
	{
		len++;
	}
	for(;len>=0;len--){
		printf("%c",c[len]);
	}
  //  fp1 = fopen("Result2.txt","w");
  return 0;
}
