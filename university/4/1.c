#include<stdio.h>

int main(void){
	int i=0;

	while(i<=20){
		if(i%2) printf("%d\n",i);
		i++;
	}

	return 0;
}