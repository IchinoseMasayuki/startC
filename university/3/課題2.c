#include <stdio.h>
#include <stdlib.h>

int main(void){
	int day,num;
	char ch[]="���ΐ��؋��y��";
	printf("2016�N11���̓��ɂ�����͂���B\n���ɂ�: ");
	scanf("%d",&day);
	while(day>30 || day<1){
		printf("%d����11���ɂ���܂���B\n",day);
		exit(0);
	}
	(day%7==0)? (num=0):(0);
	(day%7==1)? (num=2):(0);
	(day%7==2)? (num=4):(0);
	(day%7==3)? (num=6):(0);
	(day%7==4)? (num=8):(0);
	(day%7==5)? (num=10):(0);
	(day%7==6)? (num=12):(0);
	printf("2016�N11��%d����%c%c�j���ł��B\n",day,ch[num],ch[num+1]);
	return 0;
}
