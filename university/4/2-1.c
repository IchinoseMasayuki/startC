#include<stdio.h>

int main(void){
	int num=0;
	do{
		printf("1�ȏ�9�ȉ��̐�����͂��Ă�������\n");
		scanf("%d",&num);
	}while(num<1 || num>9);

	return 0;
}
