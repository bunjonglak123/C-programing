#include<stdio.h>
#include<string.h>
#define MAX 128

int main(void)
{
	FILE *fp;
	fp = fopen("5most.txt","r");
	char sentence[MAX];
	while(fgets(sentence,MAX, fp)) 
	{
       fputs(strupr(sentence), stdout);
    }
}
