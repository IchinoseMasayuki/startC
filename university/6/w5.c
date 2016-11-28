#include<stdio.h>

double dpart(double x){
	int y=x;
	return (x-y);
}
int main(void){
	double dnum;
	printf("À”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%lf",&dnum);
	printf("%f‚Ì¬”•”•ª‚Í%f\n",dnum,dpart(dnum));
	return 0;
}
