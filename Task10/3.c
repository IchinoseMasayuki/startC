#include<stdio.h>

int main(void){

	int num50, num10, num5, num1;							/*硬貨のそれぞれの枚数*/
	int num050, num010, num05;							/*それぞれの使った後の残りの金額*/
	int i=0;									/*試行回数の記録用*/
	printf("50円 10円 5円 1円\n");
	for(num50=0;50*num50<=100;num50++){						/*50円玉の試行*/
		num050=100-(50*num50);							/*num050に余りに金額を代入*/
		for(num10=0;10*num10<=num050;num10++){					/*10円玉の試行*/
			num010=num050-(10*num10);					/*num010にあまりの金額を代入*/
			for(num5=0;5*num5<=num010;num5++){				/*5円玉の試行*/
				num05=num010-(5*num5);					/*num050にあまりに金額を代入*/
				num1=num05;						/*num050が1円玉の数になる*/
				printf("%3d  %3d  %3d  %3d\n",num50,num10,num5,num1);	/*結果の表示*/
				i++;							/*試行回数の記録*/
			}
		}
	}
	printf("%d通り\n",i);								/*試行回数の表示*/
	return 0;
}
