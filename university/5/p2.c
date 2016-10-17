#include<stdio.h>

int main(void){
	int num[5][5]={{2,1,3,2,5},{1,2,6,1,0},{4,0,0,0,2},{5,6,7,8,0},{1,0,1,1,0}};
	int i,j,n;

	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			n=(num[i][j]==0);
			num[i][j]=n;
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
