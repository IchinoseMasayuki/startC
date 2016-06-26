#include<stdio.h>

int main(void){

	int num50, num10, num5, num1;							/*d‰İ‚Ì‚»‚ê‚¼‚ê‚Ì–‡”*/
	int num050, num010, num05;							/*‚»‚ê‚¼‚ê‚Ìg‚Á‚½Œã‚Ìc‚è‚Ì‹àŠz*/
	int i=0;									/*s‰ñ”‚Ì‹L˜^—p*/
	printf("50‰~ 10‰~ 5‰~ 1‰~\n");
	for(num50=0;50*num50<=100;num50++){						/*50‰~‹Ê‚Ìs*/
		num050=100-(50*num50);							/*num050‚É—]‚è‚É‹àŠz‚ğ‘ã“ü*/
		for(num10=0;10*num10<=num050;num10++){					/*10‰~‹Ê‚Ìs*/
			num010=num050-(10*num10);					/*num010‚É‚ ‚Ü‚è‚Ì‹àŠz‚ğ‘ã“ü*/
			for(num5=0;5*num5<=num010;num5++){				/*5‰~‹Ê‚Ìs*/
				num05=num010-(5*num5);					/*num050‚É‚ ‚Ü‚è‚É‹àŠz‚ğ‘ã“ü*/
				num1=num05;						/*num050‚ª1‰~‹Ê‚Ì”‚É‚È‚é*/
				printf("%3d  %3d  %3d  %3d\n",num50,num10,num5,num1);	/*Œ‹‰Ê‚Ì•\¦*/
				i++;							/*s‰ñ”‚Ì‹L˜^*/
			}
		}
	}
	printf("%d’Ê‚è\n",i);								/*s‰ñ”‚Ì•\¦*/
	return 0;
}
