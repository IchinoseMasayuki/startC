#include<stdio.h>
#include<math.h>

int main(void){
	int i;
	double dou=0;
	double a;

	printf("•ªŠ„”„");
	scanf("%lf",&a);

	for(i=0;i<a;i++){
		dou=dou+(pow(i/a,2)/a);
	}
	printf("–ÊÏ„%f\n",dou);
	return 0;
}
