#include<stdio.h>

int get2(void){
	int x;
	scanf("%d",&x);
	return (x*2);
}

int main(void){
	int a=get2();
	printf("%d\n",a);
}