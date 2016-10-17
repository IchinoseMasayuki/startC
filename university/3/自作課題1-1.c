#include<stdio.h>

int main(void){
	int num1, i;
	printf("©‘R”=>");
	scanf("%d",&num1);
	printf("–ñ”„");
	for(i=2;i<=num1 && i<=100;i++){
		if(num1%i==0)
			printf(" %d",i);
	}
	printf("\n”{”„");
	for(i=num1;i<=100 && num1!=0;i++){
		if(i%num1==0)
			printf(" %d",i);
	}
	printf("\n");
	return 0;
}
