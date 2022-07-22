#include<stdio.h>
int main(){
    int a,b,m,n,s,s1,s2,s3,s4,s5;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    s = a*6;
    s2 = b*10;
    if(s<m&& s!=0){
        for (int i = 1; i <= 10; i++) {
        s1 = s*(i);    
        if(s1>=m){
            s4=i;
            break;
            }
        }
    }
    if(s2<n && s2!=0) {
        for (int j = 1; j <= 10; j++) {
        s3 = s2*(j);    
        if(s3>=n){
            s5=j;
            break;
            }
        }
        }
    if(s4>s5){
        printf("%d\n",s4);
    }
    if(a==0 and b==0){
    goto a;
}
    if(b != 0 and s4<s5 and a !=0) {
    printf("%d\n",s5);
    }
    if(s5>s4){
        printf("%d\n",s5);
    }

    if(a*m == 0 and b*n == 0) {
    a:
    printf("Unable to finish order");
    
}
}
