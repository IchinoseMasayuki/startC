#include<stdio.h>
int main(void){
	int num[]={1,1,0};
	for(num[0]=1;num[0]<=100;0){
		printf("%d\n",num[0]);
		num[2]=num[0]+num[1];
		num[0]=num[1];
		num[1]=num[2];
	}
	return 0;
}
