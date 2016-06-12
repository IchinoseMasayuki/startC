#include<stdio.h>

int main(void)
{
	int a, b, c, d, e, f;				/*変数の宣言*/
	d = 0;
	e = 0;
	f = 0;
	printf("3つの数字を入力してください。\n");	
	scanf("%d",&a);					/*3つの数字の入力を要求*/
	scanf(" %d",&b);
	scanf(" %d",&c);
	if(a>b){					/*a>bであるときにdに1を代入する*/
	d=1;
	}
	if(b>c){					/*b>cであるときにeに1を代入する*/
	e=1;						
	}
	if(c>a){					/*c>aであるときにfに1を代入する*/
	f=1;						
	}
	printf("３つの整数＝＞%d",a);			/*入力内容の再表示*/
	printf(" %d",b);
	printf(" %d\n",c);
	printf("大きい順に表\示　");			/*以下結果表示*/
	if(d==1){
		if(e==1){				/*d=1,e=1のときa>b b>cよりa>b>c*/
			printf("%d ",a);
			printf("%d ",b);
			printf("%d",c);
		}
		else if(f==1){				/*d=1,e=0,f=1のときa>b,c<b,c>aよりc>a>b*/
			printf("%d ",c);
			printf("%d ",a);
			printf("%d",b);
		}
		else{					/*d=1,e=0,f=0のときa>b,c<b,c<aよりa>c>b*/
			printf("%d ",a);
			printf("%d ",c);
			printf("%d",b);
		}
	}
	else
{
		if(f==0){				/*d=0,f=0のときc>b,b>aよりc>b>a*/
			printf("%d ",b);
			printf("%d ",a);
			printf("%d",c);
		}
		else if(e==1){				/*d=0,f=1,e=1のときb>a,b>c,c>aよりb>c>a*/
			printf("%d ",b);
			printf("%d ",c);
			printf("%d",a);
		}
		else{					/*d=0,f=1,e=1のときb>a,b>c,a>cよりb>a>c*/
			printf("%d ",c);
			printf("%d ",b);
			printf("%d",a);
		}
	}
	return 0;
}
