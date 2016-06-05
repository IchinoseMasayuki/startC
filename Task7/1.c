#include<stdio.h>

int main(void)
{
	int a, b;				/*変数の宣言*/
	printf("整数を入力してください。\n");	
	scanf("%d",&a);				/*aに整数を代入*/
	b = a*1/2;				/*bをaの1/2にする*/
	printf("数＝＞%d\n",a);			
	if(2*b==a){				/*2*bがaと等しい時、aは偶数となる。*/
	printf("偶数です。\n");			/*結果の表示*/
	}
	else{					/*それ以外の時*/
	printf("奇数です。\n");			/*結果の表示*/
	}
	return 0;
}
