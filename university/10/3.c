#include<stdio.h>

void funcsum(int* x,int* y,int* z){
	*z=*x+*y;
}

int main(void){
	int a,b,c;
	printf("“ñ‚Â‚Ì®”„");
	scanf("%d%d",&a,&b);
	funcsum(&a,&b,&c);
	printf("˜a„%d\n",c);
}