#include <stdio.h>
#include <stdlib.h>

int main(void){
	int day,num;
	char ch[]="月火水木金土日";
	printf("2016年11月の日にちを入力せよ。\n日にち: ");
	scanf("%d",&day);
	while(day>30 || day<1){
		printf("%d日は11月にありません。\n",day);
		exit(0);
	}
	(day%7==0)? (num=0):(0);
	(day%7==1)? (num=2):(0);
	(day%7==2)? (num=4):(0);
	(day%7==3)? (num=6):(0);
	(day%7==4)? (num=8):(0);
	(day%7==5)? (num=10):(0);
	(day%7==6)? (num=12):(0);
	printf("2016年11月%d日は%c%c曜日です。\n",day,ch[num],ch[num+1]);
	return 0;
}
