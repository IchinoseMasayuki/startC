#include<stdio.h>

int func5(int x){
	return (x*x*x*x*x);
}

int main(void){
	int a;
	scanf("%d",&a);
	printf("%d\n",func5(a));
	return 0;
}