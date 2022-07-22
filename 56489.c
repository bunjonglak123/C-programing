#include<stdio.h>
int main(){
    int x[100],y[100],n,i,s=0;
    x[1]=3;
    y[1]=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i==1){
            s+=(x[1]*y[1]);
        }
        else{
            x[i] = x[i-1] + y[i-1];
            y[i] = x[i-1] - y[i-1];
            s+=x[i]*y[i];
        }

    }
    printf("%d",s);
    return 0;
}
