#include<stdio.h>
#include<math.h>

int main(void){

	double a;				/*角度*/
	int b;					/*cos a°の条件分岐用*/
	for(a=0;a<=90;a++){
		b=cos(M_PI*a/180)*10000;	/*条件分岐が上手くいかなかったため一度int変数に代入*/
		if(b!=0){			/*cos()の関数はラジアンなので、aをラジアンに直すためにπ/180を行う*/
			printf("sin%2.0f=%.4f  cos%2.0f=%.4f  tan%2.0f=%.4f\n",a,sin(M_PI*a/180),a,cos(M_PI*a/180),a,sin(M_PI*a/180)/cos(M_PI*a/180));
		}
		else{
			printf("sin%2.0f=%.4f  cos%2.0f=%.4f  tan%2.0f=存在しない\n",a,sin(M_PI*a/180),a,cos(M_PI*a/180),a);
		}
	}
	return 0;
}
