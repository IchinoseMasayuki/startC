#include <stdio.h>

int main(void){

	int a,b,c;
	int i=2;

	printf("自然数を入力してください⇒");
	scanf("%d",&a);
	
	c=a;
	if(a>=1){
		printf("素因数＝＞");
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
		printf("自然数ではありません。\n");
	}
	return 0;
}
