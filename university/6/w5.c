#include<stdio.h>

double dpart(double x){
	int y=x;
	return (x-y);
}
int main(void){
	double dnum;
	printf("��������͂��Ă�������:");
	scanf("%lf",&dnum);
	printf("%f�̏���������%f\n",dnum,dpart(dnum));
	return 0;
}
