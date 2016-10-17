#include<stdio.h>

int main(void){

	int a, b,d,c;

	scanf("%d",&a);
	printf("|");
	scanf("%d",&b);

	d=~b+1;			/*1‚Ì•â”‚ğæ‚Á‚ÄA{1‚ğ‚·‚é*/

	c=a+d;		
	printf("%d\n",c);


	return 0;
}
