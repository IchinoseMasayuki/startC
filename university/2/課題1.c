#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a;

	printf("2016�N11���̓��ɂ�����͂���\n���ɂ�����");
	scanf("%d",&a);
	printf("11��%d����",a);

	if(a>0 && a<31){
		if(a%7==0)
			printf("���j���ł�\n");

		else if(a%7==1)
			printf("�Ηj���ł�\n");

		else if(a%7==2)
			printf("���j���ł�\n");

		else if(a%7==3)
			printf("�ؗj���ł�\n");

		else if(a%7==4)
			printf("���j���ł�\n");

		else if(a%7==5)
			printf("�y�j���ł�\n");

		else if(a%7==6)
			printf("���j���ł�\n");
	}
	else
		printf("����܂���B\n");

	return 0;
}
