#include <stdio.h>

int main(void){

	char str1[]="abcd";
	char str2[4];
	int i=0;

	while(str1[i]!='\0'){
		str2[i]=str1[i];
		printf("%c",str2[i]);
		i++;
	}
	return 0;
}
