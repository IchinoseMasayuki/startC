#include<stdio.h>

int main(void){

	int a[9][9];				/*ŒvŽZ’l*/
	int i, j;				/*ŒJ‚è•Ô‚µ—p*/

	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
			a[i][j]=(i+1)*(j+1);
			printf(" %3d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
