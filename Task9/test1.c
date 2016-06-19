#include<stdio.h>			/*Š®‘S‚É—ûK—p*/

int main(void)
{

	int num, num1, num2, num3, numm1, numm2, numm3, S, i;
	i = 1;
	num1=1;
	num2=0;
	num3=0;
	printf("n„");
	scanf("%d",&num);
	while(i<=num){
		numm3=(num3*100+num2*10+num1)*i/100;
		numm2=((num3*100+num2*10+num1)*i-numm3*100)/10;
		numm1=(num3*100+num2*10+num1)*i-numm3*100-numm2*10;
		num3=numm3;
		num2=numm2;
		num1=numm1;
		i=i+1;
	}
	printf("%dI%d %d %d\n",num,num3,num2,num1);
	return 0;
}
