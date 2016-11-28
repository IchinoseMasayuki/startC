#include<stdio.h>

void fancsc(int* x){
	int y;
	printf("®”‚Ì’l„%d\n‰ÁZ‚Ì’l „ ",*x);
	scanf("%d",&y);
	*x=*x+y;
	printf("‰ÁZŒã‚Ì®”‚Ì’l„%d\n",*x);
}

int main(void){
	int a=4;
	fancsc(&a);
}
