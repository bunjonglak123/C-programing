#include <stdio.h>
int main()
{
   int ch,d;
   char c;
   printf("enter password\n");
   scanf("%d",&d);

   if(d == 123456789){
   FILE * fp;
fp = fopen("tax.csv", "w");
if(fp == NULL){
    printf("Couldn't open file\n");
    return 0;
}

int otherVar1;
int Variable1;
for(int i=0;i<10;i++){

scanf("%d",&Variable1);
scanf("%d",&otherVar1);
    fprintf(fp, "%d,%d\n", Variable1,otherVar1);

if(Variable1==0){

   fclose(fp);
	
	return 0;
			}
		}
	}
}



