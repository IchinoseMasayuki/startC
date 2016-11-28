#include<stdio.h>

void swap2(int* px,int* py,int* tmp){
	*tmp=*px;
	*px=*py;
	*py=*tmp;
}

int main(void){
	int x=10, y=20, tmp;
	swap2(&x,&y,&tmp);
	printf("%d\n%d\n",x,y);
}
