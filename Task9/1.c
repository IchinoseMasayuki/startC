#include<stdio.h>

int main(void){

	int a, i;		/*�ϐ��錾*/
	a=1;
	i=1;
	while(a<10000){		/*a<10000�̊ԁA�����𑱂���*/
		a=2*a;
		i=i+1;
	}

	printf("%d����\n",i);	/*���ʂ̕\��*/
	return 0;
}
