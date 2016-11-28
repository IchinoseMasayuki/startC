#include<stdio.h>
int main(void){
	int array[5]; int i;
	int* ptr=array;
	for(i=0;i<5;i++) scanf("%d",ptr+i);
	for(i=0;i<5;i++) printf("%d\n",*(ptr+i));
	return 0;
}