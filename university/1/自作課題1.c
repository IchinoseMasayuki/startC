#include<stdio.h>

int main(void){

	int a, b,d,c;

	scanf("%d",&a);
	printf("�|");
	scanf("%d",&b);

	d=~b+1;			/*1�̕␔������āA�{1������*/

	c=a+d;		
	printf("%d\n",c);


	return 0;
}
