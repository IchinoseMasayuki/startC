#include <stdio.h>

int main(void){

	int a,b,c;
	int i=2;

	printf("���R������͂��Ă���������");
	scanf("%d",&a);
	
	c=a;
	if(a>=1){
		printf("�f��������");
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
		printf("���R���ł͂���܂���B\n");
	}
	return 0;
}
