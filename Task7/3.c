#include<stdio.h>

int main(void)
{
	int a, b;					/*変数の宣言*/
	printf("2つの数字を入力してください。\n");	
	scanf("%d",&a);					/*2つの数字の入力を要求*/
	scanf(" %d",&b);
	printf("２つの整数＝＞%d",a);			/*入力内容の再表示*/
	printf(" %d\n",b);
	printf("大きい順に表\示　");			/*以下結果表示*/
	if(a>b){
	printf("%d ",a);				/*aが大きい時a bの順番で表示*/
	printf("%d",b);
	}
	else{
	printf("%d ",b);				/*bが大きい時b aの順番で表示*/
	printf("%d\n",a);
	}
	return 0;
}
