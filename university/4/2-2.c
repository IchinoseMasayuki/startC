#include<stdio.h>

int main(void){
	int i;
	for(i=0;i<1 || i>9;0){
		printf("1以上9以下の数を入力しなさい\n");
		scanf("%d",&i);
	}

	return 0;
}
