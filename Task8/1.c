#include<stdio.h>
#include<math.h>											/*�v�Z�p��math.h��ǂݍ���*/

int main(void)
{
	double a, b, c, S;										/*�ϐ��̐錾*/
	scanf("%lf",&a);										/*3�ӂ̒����̓���*/
	scanf("%lf",&b);
	scanf("%lf",&c);
	printf("�O�ӂ̒�������%.0f %.0f %.0f\n",a,b,c);							/*���͓��e�̍ĕ\��*/
	if(a<b+c && b<c+a && c<a+b){									/*�O�p�`�ł���ꍇ*/
		S=sqrt(pow(pow(a,2)+pow(b,2)+pow(c,2),2)-2*(pow(a,4)+pow(b,4)+pow(c,4)))*1/4;		/*�w�����̌�����p�����ʐς̌v�Z*/
		printf("�ʐρ���%.2f\n",S);								/*�ʐς̕\��*/
	}
	else{												/*�U�̏ꍇ*/
	printf("�O�p�`�ł͂���܂���B\n");								/*���ʂ̕\��*/
	}
	return 0;
}
