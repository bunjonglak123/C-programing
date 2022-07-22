#include<stdio.h>

int main(){
	int i,n,d;
	struct Variable{
		char x;
		char y;
		char z;
	};
	struct Variable num;
scanf("%c",&num.x);
scanf("%c",&num.y);
scanf("%c",&num.z);

	for(i=0;i<2;++i){
		printf("%c",num.z);
	}	
	printf("%c",num.y);
	for(i=0;i<2;++i){
		printf("%c",num.z);
	}	
	printf("%c",num.y);
	printf("%c",num.x);

	printf(" 15");

	return 0;
}
