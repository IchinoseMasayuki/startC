#include<stdio.h>

int main(void){

	int a, b,d,c;

	scanf("%d",&a);
	printf("−");
	scanf("%d",&b);

	d=~b+1;			/*1の補数を取って、＋1をする*/

	c=a+d;		
	printf("%d\n",c);


	return 0;
}
