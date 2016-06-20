#include<stdio.h>
#define ke 100
#define NN 100000

int main(void){
	int n;
	n=1;
	int num[NN];
	num[1]=1;
	int numm[NN];
	numm[1]=0;
	int base;			/*ª*/
	int exponent;			/*æ*/
	int i,j;
	printf("base„");
	scanf("%d",&base);
	printf("exponent„");
	scanf("%d",&exponent);

	for(i=1;i<=exponent;i++){

		for(j=1;j<=n;j++){
			num[j]=num[j]*base;
			num[j]=num[j]+numm[j];
			numm[j]=0;
			if(num[j]>=ke){
				if(j==n){
					n=n+1;
					num[n]=0;
				}
				numm[j+1]=num[j]/ke;
				num[j]=num[j]-(numm[j+1]*ke);
			}
		}
	}
	printf("%d",num[n]);
	i=n-1;
	while(i>0){
		printf("%02d",num[i]);
		i=i-1;
	}
	return 0;
}
