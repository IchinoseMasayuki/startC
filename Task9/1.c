#include<stdio.h>

int main(void){

	int a, i;		/*変数宣言*/
	a=1;
	i=1;
	while(a<10000){		/*a<10000の間、処理を続ける*/
		a=2*a;
		i=i+1;
	}

	printf("%d日目\n",i);	/*結果の表示*/
	return 0;
}
