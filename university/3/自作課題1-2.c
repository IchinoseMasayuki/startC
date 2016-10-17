#include<stdio.h>

int main(void){
	int num1, i;
	printf("©‘R”=>");
	scanf("%d",&num1);
	printf("–ñ”„");
	for(i=2;i<=num1 && i<=100;i++){
		(num1%i==0)? printf(" %d",i):0;
	}
	printf("\n”{”„");
	for(i=num1;i<=100 && num1!=0;i++){
		(i%num1	==0)? printf(" %d",i):0;
	}
	printf("\n");
	return 0;
}
