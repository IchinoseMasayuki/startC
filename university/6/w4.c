#include<stdio.h>

int abc(int x){
	int i=0;
	while((x%2==0)&&x!=0){
		x/=2;
		i++;
	}
	return i;
}

int main(void){
	int a,b,c;
	printf("整数:");
	scanf("%d",&a);

	b=a;
	c=abc(b);
	printf("整数%dは2で、%d回割れる。\n",a,c);
}