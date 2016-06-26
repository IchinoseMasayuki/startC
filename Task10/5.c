#include<stdio.h>

int main(void){

	int a, b, ab, c;			/*abはa/bの整数部分*/

	printf("数値a＝＞");			/*入力/*/
	scanf("%d",&a);
	printf("数値b＝＞");
	scanf("%d",&b);
	ab=a/b;					/*abの計算*/
	c=a-ab*b;				/*a/bの整数部分×bはbで割ったときの商であるため、aから引くと余りがもとまる*/
	while(c!=0){;
		a=b;				/*b=>a*/
		b=c;				/*c=>b*/
		ab=a/b;
		c=a-ab*b;
	}

	printf("最大公約数＝＞%d\n",b);		/*結果の出力*/
	return 0;
}
