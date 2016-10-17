#include <stdio.h>

int main(void){

	int str1[]={0,1,2,3};
	int str2[4];
	int i;

	for(i=0;i<=4;i++){
		str2[i]=str1[i];
		printf("%d",str2[i]);
	}
	return 0;
}
