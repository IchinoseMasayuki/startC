#include<stdio.h>

int main(void){

	int num50, num10, num5, num1;							/*�d�݂̂��ꂼ��̖���*/
	int num050, num010, num05;							/*���ꂼ��̎g������̎c��̋��z*/
	int i=0;									/*���s�񐔂̋L�^�p*/
	printf("50�~ 10�~ 5�~ 1�~\n");
	for(num50=0;50*num50<=100;num50++){						/*50�~�ʂ̎��s*/
		num050=100-(50*num50);							/*num050�ɗ]��ɋ��z����*/
		for(num10=0;10*num10<=num050;num10++){					/*10�~�ʂ̎��s*/
			num010=num050-(10*num10);					/*num010�ɂ��܂�̋��z����*/
			for(num5=0;5*num5<=num010;num5++){				/*5�~�ʂ̎��s*/
				num05=num010-(5*num5);					/*num050�ɂ��܂�ɋ��z����*/
				num1=num05;						/*num050��1�~�ʂ̐��ɂȂ�*/
				printf("%3d  %3d  %3d  %3d\n",num50,num10,num5,num1);	/*���ʂ̕\��*/
				i++;							/*���s�񐔂̋L�^*/
			}
		}
	}
	printf("%d�ʂ�\n",i);								/*���s�񐔂̕\��*/
	return 0;
}
