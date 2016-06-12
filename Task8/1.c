#include<stdio.h>
#include<math.h>											/*計算用にmath.hを読み込む*/

int main(void)
{
	double a, b, c, S;										/*変数の宣言*/
	scanf("%lf",&a);										/*3辺の長さの入力*/
	scanf("%lf",&b);
	scanf("%lf",&c);
	printf("三辺の長さ＝＞%.0f %.0f %.0f\n",a,b,c);							/*入力内容の再表示*/
	if(a<b+c && b<c+a && c<a+b){									/*三角形である場合*/
		S=sqrt(pow(pow(a,2)+pow(b,2)+pow(c,2),2)-2*(pow(a,4)+pow(b,4)+pow(c,4)))*1/4;		/*ヘロンの公式を用いた面積の計算*/
		printf("面積＝＞%.2f\n",S);								/*面積の表示*/
	}
	else{												/*偽の場合*/
	printf("三角形ではありません。\n");								/*結果の表示*/
	}
	return 0;
}
