#include<stdio.h>

int main(void){
	int a, b;			/*変数の宣言*/
	printf("西暦の年数＝＞");
	scanf("%d",&a);			/*入力*/
	printf("%d年はうるう年",a);
	b=a/4;				/*b=a/4を代入*/
	if(4*b==a)			/*4b=a*/
	printf("です");
	else
	printf("ではありません");	/*4b<>a*/
	return 0;
}
