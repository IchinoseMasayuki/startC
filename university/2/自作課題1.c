#include<stdio.h>

int main(void){

	int a,b;
	int i;

	printf("���̐�������");
	scanf("%d",&a);

	b=0;
	for(i=1;i<=a;i++){
		b+=i;
	}

	printf("��������%d\n",b);
	return 0;
}
