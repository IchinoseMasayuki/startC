#include<stdio.h>

int main(void)
{
	int a, b;				/*�ϐ��̐錾*/
	printf("��������͂��Ă��������B\n");	
	scanf("%d",&a);				/*a�ɐ�������*/
	b = a*1/2;				/*b��a��1/2�ɂ���*/
	printf("������%d\n",a);			
	if(2*b==a){				/*2*b��a�Ɠ��������Aa�͋����ƂȂ�B*/
	printf("�����ł��B\n");			/*���ʂ̕\��*/
	}
	else{					/*����ȊO�̎�*/
	printf("��ł��B\n");			/*���ʂ̕\��*/
	}
	return 0;
}
