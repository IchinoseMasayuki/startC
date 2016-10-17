#include<stdio.h>

int main(void){
	int num[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%ds%d—ñ„",i+1,j+1);
			scanf("%d",&num[i][j]);
		}
	}
	printf("s—ñŽ®‚Ì’l„%d",num[0][0]*num[1][1]*num[2][2]+num[0][1]*num[1][2]*num[2][0]+num[0][2]*num[1][0]*num[2][1]-num[0][0]*num[2][1]*num[1][2]-num[1][1]*num[2][0]*num[0][2]-num[2][2]*num[0][1]*num[1][0]);
	return 0;
}