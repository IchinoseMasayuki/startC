#include<stdio.h>

double avrg(double x,double y,double z){
	return ((x+y+z)/3);
}

int main(void){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%lf",avrg(a,b,c));
	return 0;
}