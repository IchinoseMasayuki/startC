#include<stdio.h>

void fancsc(int* x){
	int y;
	printf("�����̒l����%d\n���Z�̒l ���� ",*x);
	scanf("%d",&y);
	*x=*x+y;
	printf("���Z��̐����̒l����%d\n",*x);
}

int main(void){
	int a=4;
	fancsc(&a);
}
