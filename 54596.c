#include<stdio.h>
int main()
{
    int i,j,n1,n2,max,ans1,ans2;
    scanf("%d %d",&n1,&n2);
    int arry[n1][n2];
    for (i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }


    for (i=0;i<n1;i++)
    {
        for(j=0;j<n2-2;j++)
        {
            if(arry[i][j]-arry[i][j+2]<=10||arry[i][j]-arry[i][j+2]<=-10)
            {
                if(max<arry[i][j+1])
                {
                    max=arry[i][j+1];
                    ans1=i+1;
                    ans2=j+2;
                }
            }
        }
    }
    printf("%d %d",ans1,ans2);
    return 0;
}

