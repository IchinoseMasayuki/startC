#include<stdio.h>

int main(void)
{
	double a, b, S, P;				/*�ϐ��̐錾a,b��R�l�AS����ڑ��̍�����R�AP����ڑ��̍�����R*/
	printf("��̒�R�l����͂��Ă��������B\n");	
	scanf(" %lf",&a);				/*��R�l�����*/
	scanf(" %lf",&b);
	printf("�Q�̒�R�l�i���j���� %.f",a);		/*���͓��e�̍ĕ\��*/
	printf(" %.f\n",b);
	S=a+b;						/*����ڑ��̍�����R�̌v�Z*/
	P=1/(1/a+1/b);					/*����ڑ��̍�����R�̌v�Z*/
	printf("����ڑ��̍�����R�i���j��%.2f\n",S);	/*�v�Z���ʂ̕\��*/
	printf("����ڑ��̍�����R�i���j��%.2f\n",P);
	return 0;
}
