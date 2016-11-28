#include<stdio.h>

int multi(int x,int y){
	return (x*y);
}

int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",multi(a,b));
	return 0;
}