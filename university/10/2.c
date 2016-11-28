#include<stdio.h>

void func2(int* x,int* y,int* z){
	*z=*x * (*x<=*y) + *y * (*y<*x);
}

int main(void){
	int a,b,c;
	printf("“ñ‚Â‚Ì®”a,b„");
	scanf("%d%d",&a,&b);
	func2(&a,&b,&c);
	printf("c„%d\n",c);
}