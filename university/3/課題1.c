#include<stdio.h>

int main(void){
	int a;

	printf("2016年11月の日にちを入力せよ\n日にち＝＞");
	scanf("%d",&a);
	printf("11月%d日は",a);

	if(a>0 && a<31){
		if(a%7==0)
			printf("月曜日です\n");

		else if(a%7==1)
			printf("火曜日です\n");

		else if(a%7==2)
			printf("水曜日です\n");

		else if(a%7==3)
			printf("木曜日です\n");

		else if(a%7==4)
			printf("金曜日です\n");

		else if(a%7==5)
			printf("土曜日です\n");

		else if(a%7==6)
			printf("日曜日です\n");
	}
	else
		printf("ありません。\n");

	return 0;
}
