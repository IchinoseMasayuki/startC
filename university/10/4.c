#include<stdio.h>

void funcsum(int* x,int* y){
	*x=*x+*y;
}

int main(void){
	int a,b;
	printf("��̐�������");
	scanf("%d%d",&a,&b);
	funcsum(&a,&b);
	printf("�a����%d\n",a);
}