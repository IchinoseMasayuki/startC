#include<stdio.h>

int main(void){
	int num1, num2;

	printf("����1 :");
	scanf("%d",&num1);
	printf("����2 :");
	scanf("%d",&num2);
	
	if(num1-num2>=11 || num2-num1>=11)
		printf("�����̍��͂P�P�ȏ�ł��B\n");
	
	else
		printf("�����̍��͂P�O�ȉ��ł��B\n");

	return 0;
}
