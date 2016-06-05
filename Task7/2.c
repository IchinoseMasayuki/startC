#include<stdio.h>

int main(void)
{
	int a, b, c, d, e;				/*変数の宣言*/
	printf("3つの数字を入力してください。\n");	
	scanf("%d",&a);					/*3つの数字の入力を要求*/
	scanf(" %d",&b);
	scanf(" %d",&c);
	if(a>b){					/*a>bであるときにdにaを代入する*/
	d=a;
	}
	else{						/*b>aであるときにdにbを代入する*/
	d=b;
	}
	if(d>c){					/*d>cであるときにeにdを代入する*/
	e=d;						
	}
	else{						/*c>dであるときにeにcを代入する*/
	e=c;
	}
	printf("３つの数＝＞%d",a);			/*入力内容の再表示*/
	printf(" %d",b);
	printf(" %d\n",c);
	printf("最大値＝%d",e);				/*結果の表示*/
	return 0;
}
