#include<stdio.h>

int main(void){
	int a, b;			/*�ϐ��̐錾*/
	printf("����̔N������");
	scanf("%d",&a);			/*����*/
	printf("%d�N�͂��邤�N",a);
	b=a/4;				/*b=a/4����*/
	if(4*b==a)			/*4b=a*/
	printf("�ł�");
	else
	printf("�ł͂���܂���");	/*4b<>a*/
	return 0;
}
