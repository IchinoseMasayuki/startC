#include<stdio.h>


int main(void){

	int a,b;

	printf("³‚Ì®”„");
	scanf("%d",&a);
	b=a%2;
	if(b==1) 
		printf("Šï”‚Å‚·B\n");

	else{
		while(b==0){
			a/=2;
			b=a%2;
		}
	}
	printf("“š‚¦„%d\n",a);
	return 0;
}
