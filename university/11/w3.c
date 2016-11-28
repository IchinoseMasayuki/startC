#include<stdio.h>
void fct1(int *ptr){
	int i;
	for(i=0;i<5;i++) scanf("%d",ptr+i);
}
void fct2(int *ptr){
	int i;
	for(i=0;i<5;i++) printf("%d\n",*(ptr+i));
}

int main(void){
	int array[5];
	fct1(array);
	fct2(array);
	return 0;
}