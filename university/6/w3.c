#include<stdio.h>

int abc(int x,int y){
	if(x>y) return x; else return y;
}
int main(void){
	int a,b,c;
	printf("整数A:");
	scanf("%d",&a);
	printf("整数B:");
	scanf("%d",&b);
	c=abc(a,b);
	printf("大きい方は%d\n",c);
}