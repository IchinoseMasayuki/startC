#include<stdio.h>

void func5(int* x,int* y){
	*y=*x * *x;
}

int main(void){
	int a,b;
	printf("®”„");
	scanf("%d",&a);
	func5(&a,&b);
	printf("“ñæ„%d\n",b);
}