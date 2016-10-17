#include <stdio.h>

int main(void){

	int a,b;		/*点数は整数なのでint型を用いる*/
	int i;
	double c;		/*平均点は小数なので、double型を用いる。*/
	b=0;

	for(i=1;i<=5;i++){
		printf("科目%dの点数を入力してください。\n",i);
		scanf("%d",&a);
		b+=a;		/*bにaを加算代入する*/
	}
	
	c=b;			/*bをdouble型変数に型変換する*/
	printf("5科目の合計点は%dです。\n5科目の平均点は%fです。",b,c/5);

	return 0;
}
