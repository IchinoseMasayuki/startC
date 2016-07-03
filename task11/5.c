#include<stdio.h>

int main(void){
	int num[10];			/*配列の宣言*/
	int i,j;			/*繰り返し用*/
	int n;				/*一時変数用*/
	for(i=0;i<=9;i++){
		scanf("%d",&num[i]);	/*入力*/
	}
	printf("並び替え前:");
	for(i=0;i<=9;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	for(i=0;i<=9;i++){		/*並べ替え*/
		for(j=1;j<=9;j++){
			if(i<j){
				if(num[i]<num[j]){
					n=num[j];
					num[j]=num[i];
					num[i]=n;
				}
			}
		}
	}
	printf("並べ替え後:");		/*結果の表示*/
	for(i=0;i<=9;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	return 0;
}
