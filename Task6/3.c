#include<stdio.h>

int main(void)
{
	double a, b, S, P;				/*変数の宣言a,b抵抗値、S直列接続の合成抵抗、P並列接続の合成抵抗*/
	printf("二つの抵抗値を入力してください。\n");	
	scanf(" %lf",&a);				/*抵抗値を入力*/
	scanf(" %lf",&b);
	printf("２つの抵抗値（Ω）＝＞ %.f",a);		/*入力内容の再表示*/
	printf(" %.f\n",b);
	S=a+b;						/*直列接続の合成抵抗の計算*/
	P=1/(1/a+1/b);					/*並列接続の合成抵抗の計算*/
	printf("直列接続の合成抵抗（Ω）＝%.2f\n",S);	/*計算結果の表示*/
	printf("並列接続の合成抵抗（Ω）＝%.2f\n",P);
	return 0;
}
