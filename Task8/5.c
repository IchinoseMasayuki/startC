#include<stdio.h>
#include<math.h>

int main(void){
	double a, b, c, num1, num2, D;			/*変数の宣言*/
	printf("二次方程式の計数a,b,c＝＞");
	scanf("%lf %lf %lf",&a,&b,&c);			/*入力の要求*/
	D=pow(b,2)-4*a*c;				/*判別式Dの計算*/
	if(D>0){					/*D>0(実数解を二つ持つ)のとき*/
		num1=(-b+sqrt(D))/(2*a);
		num2=(-b-sqrt(D))/(2*a);
		printf("x=%.2f %.2f\n",num1,num2);	/*結果の表示*/
	}
	else if(D==0){					/*D=0(実数解を一つ持つ)のとき*/
		num1=-b/(2*a);
		printf("x=%.2f\n",num1);		/*結果の表示*/
	}
	else{						/*D<0(虚数解)のとき*/
		printf("虚根です。\n");
	}
	return 0;
}
