#include<stdio.h>

void inc(int* ptr){
	*ptr=*ptr+1;
}
void dec(int* ptr){
	*ptr=*ptr-1;
}
int main(void){
	int x=10,y=12;
	inc(&x); dec(&y);
	printf("%d %d\n",x,y);
	return 0;
}