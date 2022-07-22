#include <stdio.h>
main()
{

    FILE *myFile;
    myFile = fopen("test project.bin", "r");

    //read file into array
    int numberArray[16];
    int i;

    for (i = 0; i < 16; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }

    for (i = 0; i < 16; i++)
    {
        printf("Number is: %d\n\n", numberArray[i]);
    }


}
