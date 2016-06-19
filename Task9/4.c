#include<stdio.h>

int main(void)
{
	int i,j, num, num2;
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		num2=num-i+1;
		for(j=1;j<num2;j++){
			printf("@");
		}
		for(j=1;j<=i;j++){
			printf("–");
		}
		for(j=1;j<i;j++){
			printf("–");
		}
		for(j=1;j<num2;j++){
			printf("@");
		}
		printf("\n");
	}
	return 0;
}
