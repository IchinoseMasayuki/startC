#include<stdio.h>
#include<math.h>

double dlog(int x){
	double t=0.0000001;
	double z;
	z=(pow(x,t)-1)/t;
	return z;
}

int main(void){
	int a;
	scanf("%d",&a);
	printf("%f\n",dlog(a));
}