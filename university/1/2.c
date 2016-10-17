#include <stdio.h>

int main(void){

	int a,b,c;
	int i=2;

	printf("©‘R”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢Ë");
	scanf("%d",&a);
	
	c=a;
	if(a>=1){
		printf("‘fˆö”„");
		while(c!=1){
			b=c/i;
			if(c == b*i){
				c=b;
				printf(" %d",i);
			}
			else{
				i++;
			}
		}
	}
	else{
		printf("©‘R”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n");
	}
	return 0;
}
