#include<stdio.h>

void oddpart(int* ptr){
	while(*ptr%2==0){
		*ptr=*ptr/2;
	}
}

int main(void){
	int x=56;
	oddpart(&x);
	printf("%d\n",x);
}