#include<stdio.h>

int main(void){
	int num1[3][3]={{1,3,5},{7,9,11},{13,15,17}};
	int num2[3][3]={{2,4,6},{8,10,12},{14,16,18}};
	int num3[3][3];
	int i,j,k,n;
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%3d ",num1[i][j]);
		}
		printf("     ");
		for(j=0;j<=2;j++){
			printf("%3d ",num2[i][j]);
		}
		printf("\n");
	}
	printf("˜a„\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%3d ",num1[i][j]+num2[i][j]);
		}
		printf("\n");
	}
	printf("Ï„\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			n=0;
			for(k=0;k<=2;k++){
				n=n+num1[i][k]*num2[k][j];
			}
			printf("%3d ",n);
		}
		printf("\n");
	}
	return 0;
}
