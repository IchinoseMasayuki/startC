#include<stdio.h>

int main(void){

	int num[]={2,-8,5,-4,6,5,7,-3,-9,1};
	int i, a, b;

	int c=0;		/*����*/
	int d=0;		/*�*/
	int e=0;		/*���̐�*/
	for(i=0;i<=9;i++){
		a=num[i]/2;
		b=2*a;
		if(num[i]==b)		/*��������̔���*/
			c++;
		else
			d++;
		if(num[i]<0)		/*���̐��̔���*/
			e++;
	}
	printf("��������%d�@�����%d�@���̐�����%d\n",c,d,e);

	return 0;
}
