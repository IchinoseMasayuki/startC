#include<stdio.h>

int main(void){

	int num[]={2,-8,5,-4,6,5,7,-3,-9,1};
	int i, a, b;

	int c=0;		/*‹ô”*/
	int d=0;		/*Šï”*/
	int e=0;		/*•‰‚Ì”*/
	for(i=0;i<=9;i++){
		a=num[i]/2;
		b=2*a;
		if(num[i]==b)		/*‹ô”‚©Šï”‚Ì”»’è*/
			c++;
		else
			d++;
		if(num[i]<0)		/*•‰‚Ì”‚Ì”»’è*/
			e++;
	}
	printf("‹ô”„%d@Šï”„%d@•‰‚Ì”„%d\n",c,d,e);

	return 0;
}
