#include<stdio.h>
#include"func.h"

int main(void){
	int a, b;
	printf("二つの整数を入力してください\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("和＝＞%d\n差＝＞%d\n",plus(a,b),minus(a,b));
	return 0;
}