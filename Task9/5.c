#include<stdio.h>

int main(void){

	double e, a, b, c;		/*今回は小数を使うのでdoubleを用いる*/
	int i;
	e=1;				/*準備*/
	a=1;
	b=0;
	c=1;
	i=0;
	while(i<=0){			/*bの値が小数点5桁に影響を及ぼさなくなったらループ終了*/
	a=a*c;				/*階乗*/
	b=1/a;				/*階乗分の１*/
	e=e+b;
	if(b<=0.000001){
		i=1;
	}
	c=c+1;				
	}
	printf("e＝%.5f\n",e);		/*結果の表示*/
	return 0;
}
