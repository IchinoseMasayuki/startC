#include<stdio.h>

int main(void){
	int n, num1,num2;

	printf("���R��1����");
	scanf("%d",&num1);
	printf("���R��2����");
	scanf("%d",&num2);

	if(num1<num2){
		n=num1;
		num1=num2;
		num2=n;
	}
	for(n=num1%num2;n!=0;n=num1%num2){
		num1=num2;
		num2=n;
	}
	
	printf("�ő���񐔁���%d\n",num2);

	return 0;
}
