#include<stdio.h>
#include"func.h"

int main(void){
	int a, b;
	printf("��̐�������͂��Ă�������\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("�a����%d\n������%d\n",plus(a,b),minus(a,b));
	return 0;
}