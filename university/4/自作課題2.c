#include<stdio.h>
#include<math.h>

int main(void){
	int i;
	double dou=0;
	double a;

	printf("����������");
	scanf("%lf",&a);

	for(i=0;i<a;i++){
		dou=dou+(pow(i/a,2)/a);
	}
	printf("�ʐρ���%f\n",dou);
	return 0;
}
