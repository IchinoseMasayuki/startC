#include<stdio.h>

int sum_array(int* ptr,int n){
	int x=0; int i;
	for(i=0;i<n;i++) x=x+ptr[i];	/*x=x+*(ptr+i);*/
	return x;
}

int main(void){
	int array[4];
	int a;
	for(a=0;a<4;a++) scanf("%d",&array[a]);
	a=sum_array(&array,4);
	printf("%d\n",a);
	return 0;
}