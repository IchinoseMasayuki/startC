#include <stdio.h>

int main(void)
{
	int n, num, A, B;			/*�ϐ��̐錾n�J��Ԃ��p�Anum5���̐��AA��񌅁AB���O��*/
	n=1;					/*while�̏���*/
	while(n){				/*n=0�܂ŌJ��Ԃ�*/
	printf("5���̐�����͂��Ă��������B\n");
	scanf("%d",&num);			/*5���̐����̓���*/
	if(num>100000){				/*6���ȏ�̏ꍇ*/
	printf("�傫�����܂��I\n");		
	}
	else if(num<9999){			/*4���ȉ��̏ꍇ*/
	printf("���������܂��I\n");
	}
	else{					/*������5���̏ꍇn=0*/
	n=0;
	}
}
	printf("������%d\n",num);		/*���͓��e�̍ĕ\��*/
	A =num/1000;				/*num/1000��A�ɑ���AA�͏����_�ȉ��؂�̂ĂȂ̂�num�̏�2���ɂȂ�B*/
	B =num-A*1000;				/*num-A*1000��B�ɑ���Anum-(num�̏�2��)�Ȃ̂�num�̉�3���ɂȂ�B*/
	printf("��2����%d  ",A);		/*�v�Z���ʂ̕\��*/
	printf("��3����%d\n",B);
	return 0;
}
