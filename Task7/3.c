#include<stdio.h>

int main(void)
{
	int a, b;					/*�ϐ��̐錾*/
	printf("2�̐�������͂��Ă��������B\n");	
	scanf("%d",&a);					/*2�̐����̓��͂�v��*/
	scanf(" %d",&b);
	printf("�Q�̐�������%d",a);			/*���͓��e�̍ĕ\��*/
	printf(" %d\n",b);
	printf("�傫�����ɕ\\���@");			/*�ȉ����ʕ\��*/
	if(a>b){
	printf("%d ",a);				/*a���傫����a b�̏��Ԃŕ\��*/
	printf("%d",b);
	}
	else{
	printf("%d ",b);				/*b���傫����b a�̏��Ԃŕ\��*/
	printf("%d\n",a);
	}
	return 0;
}
