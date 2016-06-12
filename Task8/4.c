#include<stdio.h>

int main(void)
{
	int a, b, c, d, e, i;				/*変数の宣言*/
	printf("頭の数は？  ");
	scanf("%d",&a);					/*頭の数の入力*/
	printf("脚の数は？  ");
	scanf("%d",&b);					/*脚の数の入力*/
	
	printf("頭の数＝＞%d\n",a);			/*入力内容の再表示*/
	printf("脚の数＝＞%d\n",b);
	if(b%2==0 && 4*a>=b && 2*a<=b){			/*成り立つためには脚は偶数であり、脚の数は頭の数の2倍から4倍の間でなくてはならない*/
		for(i=1;i<=a;i++){			/*ループ*/
			c=i;
			d=a-c;
			if(2*c+4*d==b){			/*脚の数と頭の数が一致するとき*/
				e=c;
				break;			/*答えが見つかったためループ終了*/
			}
		}
	printf("鶴＝%d羽　亀＝%d匹\n",e,a-e);		/*結果の表示*/
	}
	else
	printf("計算できません。\n");			/*計算できない場合*/

	return 0;
}
