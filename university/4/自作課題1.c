#include<stdio.h>
#define NN 100000	/*”z—ñ”‚ÌãŒÀ*/

int main(void){
	int n=1;
	int num[NN];
	num[1]=1;
	int numm[NN];
	numm[1]=0;
	int base,i,j;
	printf("base„");
	scanf("%d",&base);

	printf("%d !\n",base);
		/*ŒvZˆ—*/
	for(i=1;i<=base;i++){
		for(j=1;j<=n;j++){
			num[j]=num[j]*i;
			num[j]=num[j]+numm[j];
			numm[j]=0;
			if(num[j]>=1000){
				if(j==n){
					n=n+1;
					num[n]=0;
				}
				numm[j+1]=num[j]/1000;
				num[j]=num[j]-(numm[j+1]*1000);
			}
		}
	}

	printf("%d",num[n]);
	i=n-1;
	while(i>0){
		printf("%03d",num[i]);
		i=i-1;
	}
	return 0;
}
