#include <stdio.h>
#include <stdlib.h>
/*function*/
int staff();
int read();
double calcTax();
/*global*/
double income,tax,t=0;
int staff()
{
   int ch,d;
   char sh;
   struct Variable
{
   int n1, n2;
};
   printf("enter password\n");
   scanf("%d",&d);

   if(d == 123456789){
   FILE * fp;
   struct Variable num;
fp = fopen("test project.bin", "w");
if(fp == NULL){
    printf("Couldn't open file\n");
    return 0;
}


printf("***input Income and percent***\nlike this\n5000000\n35\n");
for(int i=0;i<8;i++){

scanf("%d",&num.n1);
scanf("%d",&num.n2);
    fwrite(&num,sizeof(struct Variable),1,fp);

if(num.n1==0){

   fclose(fp);
	
	return 0;
			}
		}
	}
}

int read()
{
	FILE *fp;
	struct Variable
{
   int n1, n2;
};
	char c;
	struct Variable num;
	// Open file
	fp = fopen("test project.bin", "r");
	if (fp == NULL)
	{
		printf("Cannot open file \n");
		return 0;
	}

	for(c = 0; c < 8; ++c)
   {
      fread(&num,sizeof(struct Variable),1,fp); 
      printf("money: %d percent: %d\n", num.n1, num.n2);
   }
   printf("money: %d percent: %d\n", num.n1, num.n2);
	fclose(fp);
	return 0;
}

double calcTax(double income) {
	FILE *fp;
	struct Variable
{
   int n1, n2;
};
struct Variable num;
	fp= fopen("test project.bin","r");
	for(int c=0;c<8;++c){
		fread(&num,sizeof(struct Variable),1,fp); 
    for (int i = 0; i < 8; i++) {
        if (income > num.n1) {
            t += (income - num.n1) * num.n2/100;
            printf("%12.0d %12.0d%% %12.0f %12.0f\n",
                   num.n1,
                   num.n2,
                   income - num.n1,
                   (income - num.n1) * num.n2);
            income = num.n1;
        }
    }
}
    return t;
}

int main() {
	staff();
	printf("your tax rate\n");
	read();
    printf("enter income after all deductions -> ");
    scanf("%lf", &income);
    tax = calcTax(income);
    printf("income = %.0f, tax = %.0f\n", income, tax);
    return 0;
}
