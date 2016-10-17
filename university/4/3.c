#include<stdio.h>

int main(void){
	int i=0;
	int j=0;
	int n;
	int num[12];
	scanf("%d",&n);
	while(n>0){
		num[i]=n%10;
		n=n/10;
		i++;
	}
	for(j=0;j<i;j++){
		printf("%d",num[j]);
	}
	return 0;
}
