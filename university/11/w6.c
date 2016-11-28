#include<stdio.h>

int nibai(int x){
	return 2*x;
}
int sanbai(int x){
	return 3*x;
}

int main(void){
	int a;
	int (*ptr)(int x);
	scanf("%d",&a);
	if(a==2) ptr=nibai;
	else if(a==3) ptr=sanbai;

	scanf("%d",&a);
	printf("%d\n",ptr(a));
	return 0;
}