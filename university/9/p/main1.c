#include<stdio.h>

void funcsw(int* px){
	if(*px!=0) *px=1;
}

int main(void){
	int a;
	printf("��������");
	scanf("%d",&a);
	funcsw(&a);
	printf("���聁��%d\n",a);
	return 0;
}