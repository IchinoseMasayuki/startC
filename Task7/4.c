#include<stdio.h>

int main(void){
	int a, b;			/*•Ï”‚ÌéŒ¾*/
	printf("¼—ï‚Ì”N”„");
	scanf("%d",&a);			/*“ü—Í*/
	printf("%d”N‚Í‚¤‚é‚¤”N",a);
	b=a/4;				/*b=a/4‚ğ‘ã“ü*/
	if(4*b==a)			/*4b=a*/
	printf("‚Å‚·");
	else
	printf("‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");	/*4b<>a*/
	return 0;
}
