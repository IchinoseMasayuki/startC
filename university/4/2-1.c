#include<stdio.h>

int main(void){
	int num=0;
	do{
		printf("1以上9以下の数を入力してください\n");
		scanf("%d",&num);
	}while(num<1 || num>9);

	return 0;
}
