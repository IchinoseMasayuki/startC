#include<stdio.h>
#include<stdlib.h>

int main(void){
	double a, b, c;				/*変数の宣言*/
	char ch;				/*変数の宣言*/
	printf("計算式＝＞");
	scanf("%lf %c %lf",&a,&ch,&b);		/*数字　文字　数字の順に入力を求める。*/
	switch(ch){
		case '+':			/* +の場合*/
			c=a+b;
			break;
		case '-':			/* -の場合*/
			c=a-b;
			break;
		case '*':			/* *の場合*/
			c=a*b;
			break;
		case '/':			/*　/の場合*/
			c=a/b;
			break;

		default:			/*それ以外*/
			printf("計算できません。\n");
			exit(1);		/*プログラムの終了*/
			break;
	}
	printf("%.1f %c %.1f＝%.1f\n",a,ch,b,c);	/*式と計算結果の再表示*/

	return 0;
}
