#include<stdio.h>
#define ke 100				/*配列における1変数の上限数*/
#define NN 100000			/*用意する配列数*/
					/*このプログラムではnum[n]を100進数として扱い、並べて考える*/
					/*num[n]において99を超えた値をnumm[n+1]に入力して、num[n+1]の計算終了後に足すことで繰り上がりを行える。*/
					/*この方法ならオーバーフローが発生することなく10000の階乗や11111の11111乗なども計算できると考えた。*/
int main(void){
	int n;				/*使用した配列数の記録*/
	n=1;				/*初期状態では1つ*/
	int num[NN];			/*計算値*/
	num[1]=1;			/*初期化*/
	int numm[NN];			/*計算後の繰り上がり数*/
	numm[1]=0;			/*初期化*/
	int base;			/*階乗する数*/
	int i,j;			/*繰り返し処理用*/
	printf("base＝＞");
	scanf("%d",&base);		/*入力要求*/

	printf("%d !＝\n",base);
		/*計算処理*/
	for(i=1;i<=base;i++){					/*1から階乗する数までのループ*/

		for(j=1;j<=n;j++){				/*有効な配列の数だけ処理を行う必要があるため有効な配列数分のループ*/
			num[j]=num[j]*i;			/*変数にiをかける*/
			num[j]=num[j]+numm[j];			/*前の配列の繰り上がりを最後に足す*/
			numm[j]=0;				/*繰り上がり数の初期化*/
			if(num[j]>=ke){				/*1変数あたりにおける上限値を超えてしまった場合*/
				if(j==n){			/*現在有効な配列数の一番大きい値の時、新たに有効な配列を更新する*/
					n=n+1;
					num[n]=0;		/*有効にした配列の初期化*/
				}
				numm[j+1]=num[j]/ke;		/*繰り上げの処理*/
				num[j]=num[j]-(numm[j+1]*ke);
			}
		}
	}
		/*計算終了*/
		/*以下結果の表示*/
	printf("%d",num[n]);
	i=n-1;
	while(i>0){
		printf("%02d",num[i]);
		i=i-1;
	}
	return 0;
}
