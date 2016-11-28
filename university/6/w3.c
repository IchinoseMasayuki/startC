#include<stdio.h>

int abc(int x,int y){
	if(x>y) return x; else return y;
}
int main(void){
	int a,b,c;
	printf("®”A:");
	scanf("%d",&a);
	printf("®”B:");
	scanf("%d",&b);
	c=abc(a,b);
	printf("‘å‚«‚¢•û‚Í%d\n",c);
}