#include<stdio.h>


int main(void){

	int a,b;

	printf("���̐�������");
	scanf("%d",&a);
	b=a%2;
	if(b==1) 
		printf("��ł��B\n");

	else{
		while(b==0){
			a/=2;
			b=a%2;
		}
	}
	printf("��������%d\n",a);
	return 0;
}
