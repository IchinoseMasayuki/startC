#include<stdio.h>
#include<math.h>

int main(void){

	double a;				/*�p�x*/
	int b;					/*cos a���̏�������p*/
	for(a=0;a<=90;a++){
		b=cos(M_PI*a/180)*10000;	/*�������򂪏�肭�����Ȃ��������߈�xint�ϐ��ɑ��*/
		if(b!=0){			/*cos()�̊֐��̓��W�A���Ȃ̂ŁAa�����W�A���ɒ������߂Ƀ�/180���s��*/
			printf("sin%2.0f=%.4f  cos%2.0f=%.4f  tan%2.0f=%.4f\n",a,sin(M_PI*a/180),a,cos(M_PI*a/180),a,sin(M_PI*a/180)/cos(M_PI*a/180));
		}
		else{
			printf("sin%2.0f=%.4f  cos%2.0f=%.4f  tan%2.0f=���݂��Ȃ�\n",a,sin(M_PI*a/180),a,cos(M_PI*a/180),a);
		}
	}
	return 0;
}
