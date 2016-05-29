#include <stdio.h>

int main(void)
{
	int n, num, A, B;			/*変数の宣言n繰り返し用、num5桁の数、A上二桁、B下三桁*/
	n=1;					/*whileの準備*/
	while(n){				/*n=0まで繰り返し*/
	printf("5桁の数を入力してください。\n");
	scanf("%d",&num);			/*5桁の数字の入力*/
	if(num>100000){				/*6桁以上の場合*/
	printf("大きすぎます！\n");		
	}
	else if(num<9999){			/*4桁以下の場合*/
	printf("小さすぎます！\n");
	}
	else{					/*正しく5桁の場合n=0*/
	n=0;
	}
}
	printf("数＝＞%d\n",num);		/*入力内容の再表示*/
	A =num/1000;				/*num/1000をAに代入、Aは小数点以下切り捨てなのでnumの上2桁になる。*/
	B =num-A*1000;				/*num-A*1000をBに代入、num-(numの上2桁)なのでnumの下3桁になる。*/
	printf("上2桁＝%d  ",A);		/*計算結果の表示*/
	printf("下3桁＝%d\n",B);
	return 0;
}
