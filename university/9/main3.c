#include<stdio.h>

void inc(int* n){
	*n=*n+1;
}

int main(void){
	int a;
	printf("®”„");
	scanf("%d",&a);
	inc(&a);
	printf("„%d\n",a);
	return 0;
}