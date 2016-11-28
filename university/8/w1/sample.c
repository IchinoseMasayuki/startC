#include<stdio.h>
#include"func.h"

int main(void){
	double a, b;
	scanf("%lf %lf",&a,&b);
/*	scanf("%lf",&b);*/
	printf("%f\n",qlarger(a,b));
	return 0;
}