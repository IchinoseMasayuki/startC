#include<stdio.h>

int main(void)
{
	int a, b, c;/*a=��� b=���� c=�O�p�`�̖ʐ�*/
	printf("��ӂ́H\n");
	scanf("%d", &a);/*��ӂ̓���*/
	printf("�����́H\n");
	scanf("%d", &b);/*�����̓���*/
	c = a*b*1/2;/*�O�p�`�̖ʐς̌���*/
	printf("���=>%d \n",a);
	printf("����=>%d \n",b);
	printf("�ʐ�=%d \n", c);
	return 0;
}
