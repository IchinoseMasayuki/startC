#include<stdio.h>

int func1(int* px,int* py){
	return (*px+*py);
}

int main(void){
	int x,y,z;
	x=10; y=11;
	z=func1(&x,&y);
	printf("%d\n",z);
	return 0;
}