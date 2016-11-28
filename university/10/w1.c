#include<stdio.h>

void func1(int* px,int* py,int* pz){
	*pz=*px+*py;
}

int main(void){
	int x,y,z;
	x=10; y=11;
	func1(&x,&y,&z);
	printf("%d\n",z);
	return 0;
}