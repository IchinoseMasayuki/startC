#include<stdio.h>
#include<stdlib.h>

int main(void){
	double a, b, c;				/*�ϐ��̐錾*/
	char ch;				/*�ϐ��̐錾*/
	printf("�v�Z������");
	scanf("%lf %c %lf",&a,&ch,&b);		/*�����@�����@�����̏��ɓ��͂����߂�B*/
	switch(ch){
		case '+':			/* +�̏ꍇ*/
			c=a+b;
			break;
		case '-':			/* -�̏ꍇ*/
			c=a-b;
			break;
		case '*':			/* *�̏ꍇ*/
			c=a*b;
			break;
		case '/':			/*�@/�̏ꍇ*/
			c=a/b;
			break;

		default:			/*����ȊO*/
			printf("�v�Z�ł��܂���B\n");
			exit(1);		/*�v���O�����̏I��*/
			break;
	}
	printf("%.1f %c %.1f��%.1f\n",a,ch,b,c);	/*���ƌv�Z���ʂ̍ĕ\��*/

	return 0;
}
