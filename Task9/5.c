#include<stdio.h>

int main(void){

	double e, a, b, c;		/*����͏������g���̂�double��p����*/
	int i;
	e=1;				/*����*/
	a=1;
	b=0;
	c=1;
	i=0;
	while(i<=0){			/*b�̒l�������_5���ɉe�����y�ڂ��Ȃ��Ȃ����烋�[�v�I��*/
	a=a*c;				/*�K��*/
	b=1/a;				/*�K�敪�̂P*/
	e=e+b;
	if(b<=0.000001){
		i=1;
	}
	c=c+1;				
	}
	printf("e��%.5f\n",e);		/*���ʂ̕\��*/
	return 0;
}
