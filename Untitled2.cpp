#include <stdio.h>
int main()
{
FILE * fp;
fp = fopen("tax.csv", "w");
if(fp == NULL){
    printf("Couldn't open file\n");
    return 0;
}

float otherVar1 = 1.0f; // random thing you want to put in second column
float otherVar2 = 2.0f; // random thing you want to put in second column

for (int j = 0; j<Variable0; j++){
    fprintf(fp, "%f,%f\n", (j+Variable1), (otherVar1));
    fprintf(fp, "%f,%f\n", (j+Variable2), (otherVar2));
}
fclose(fpw);
}
