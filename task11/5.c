#include<stdio.h>

int main(void){
	int num[10];			/*�z��̐錾*/
	int i,j;			/*�J��Ԃ��p*/
	int n;				/*�ꎞ�ϐ��p*/
	for(i=0;i<=9;i++){
		scanf("%d",&num[i]);	/*����*/
	}
	printf("���ёւ��O:");
	for(i=0;i<=9;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	for(i=0;i<=9;i++){		/*���בւ�*/
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
	printf("���בւ���:");		/*���ʂ̕\��*/
	for(i=0;i<=9;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	return 0;
}
