#include<stdio.h>

void fct5(char* str1,char* str2){
	while(*str2=*str1){
		str1=str1+1;
		str2=str2+1;
	}
}

int main(void){
	char array1[20]; char array2[20];
	scanf("%s",array1);
	fct5(array1,array2);
	printf("%s",array2);
	return 0;
}