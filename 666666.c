/*#include <stdio.h>
int main()
{
     int marks[10], i, n, sum = 0, average;

     scanf("%d", &n);

     for(i=0; i<n; i++)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &marks[i]);
     }

     return 0;
}*/
#include<stdio.h>
int main()
{
    int arr_size;  
	scanf("%d",&arr_size);
    int number[arr_size];
    int i,j, tmp;
    for(i=0; i<arr_size; i++)
    {
        scanf("%d", &number[i]);
    }
    i = 0;
    do
    {
        if(i < arr_size-1 && number[i] > number[i+1])
        {
            tmp = number[i+1];
            number[i+1] = number[i];
            number[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
    }while(i < arr_size);

	    for(i=0; i<arr_size; i++)
    {
        printf("%d", number[i]);   
    }

    return 0;   
}
