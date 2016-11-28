#include<stdio.h>

int myfunc(int x,int y){
	int z,i;
	z=1;
	for(i=1;i<=y;i++){
		z=z*x;
	}
	return z;
}

int main(void){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",myfunc(a,b));
	return 0;
}