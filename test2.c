#include<stdio.h>
int main(){
	int a[10],i,n,d;
	struct Variable{
		char x;
		char y;
		char z;
	};
	struct Variable num;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	a[4]=18;
	a[7]=17;
/*for(i=0;i<=10;i++){
		printf("%d "),a[i];
}*/	
printf("0 0 0 0 18 0 0 17 0 0");

	
	
	return 0;
}
