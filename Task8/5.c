#include<stdio.h>
#include<math.h>

int main(void){
	double a, b, c, num1, num2, D;			/*�ϐ��̐錾*/
	printf("�񎟕������̌v��a,b,c����");
	scanf("%lf %lf %lf",&a,&b,&c);			/*���̗͂v��*/
	D=pow(b,2)-4*a*c;				/*���ʎ�D�̌v�Z*/
	if(D>0){					/*D>0(������������)�̂Ƃ�*/
		num1=(-b+sqrt(D))/(2*a);
		num2=(-b-sqrt(D))/(2*a);
		printf("x=%.2f %.2f\n",num1,num2);	/*���ʂ̕\��*/
	}
	else if(D==0){					/*D=0(�������������)�̂Ƃ�*/
		num1=-b/(2*a);
		printf("x=%.2f\n",num1);		/*���ʂ̕\��*/
	}
	else{						/*D<0(������)�̂Ƃ�*/
		printf("�����ł��B\n");
	}
	return 0;
}
