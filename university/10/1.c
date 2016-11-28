#include<stdio.h>

void prnum(int* x){
	int i=*x;
	for(0;i>=0;i--) printf("%d ",i);
}

int main(void){
	int z=10; prnum(&z);
}