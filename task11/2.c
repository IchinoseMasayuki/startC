#include<stdio.h>

int main(void){

	int a[9][9];				/*計算値*/
	int i, j;				/*繰り返し用*/

	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
			a[i][j]=(i+1)*(j+1);
			printf(" %3d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
