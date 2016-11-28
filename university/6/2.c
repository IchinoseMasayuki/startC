#include<stdio.h>

int lowest(int x){
	return (x%10);
}

int main(void){
	int a;
	scanf("%d",&a);
	printf("%d\n",lowest(a));
	return 0;
}