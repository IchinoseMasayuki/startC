#include<stdio.h>

int main(void)
{

	int num1, num2, i;
	i = 1;
	num2=1;
	printf("n„");
	scanf("%d",&num1);
	while(i<=num1){
	num2=num2*i;
	i=i+1;
	}
	printf("%dI%d\n",num1,num2);
	return 0;
}
