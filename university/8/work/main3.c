#include<stdio.h>
#include"myfunc.h"

int main(void){
	int i,a;
	printf("呼び出し回数＝＞");
	scanf("%d",&a);
	for(i=0;i<a;i++) printf("%d\n",func3());
	return 0;
}