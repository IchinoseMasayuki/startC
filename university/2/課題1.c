#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a;

	printf("2016”N11ŒŽ‚Ì“ú‚É‚¿‚ð“ü—Í‚¹‚æ\n“ú‚É‚¿„");
	scanf("%d",&a);
	printf("11ŒŽ%d“ú‚Í",a);

	if(a>0 && a<31){
		if(a%7==0)
			printf("ŒŽ—j“ú‚Å‚·\n");

		else if(a%7==1)
			printf("‰Î—j“ú‚Å‚·\n");

		else if(a%7==2)
			printf("…—j“ú‚Å‚·\n");

		else if(a%7==3)
			printf("–Ø—j“ú‚Å‚·\n");

		else if(a%7==4)
			printf("‹à—j“ú‚Å‚·\n");

		else if(a%7==5)
			printf("“y—j“ú‚Å‚·\n");

		else if(a%7==6)
			printf("“ú—j“ú‚Å‚·\n");
	}
	else
		printf("‚ ‚è‚Ü‚¹‚ñB\n");

	return 0;
}
