#include<stdio.h>

int main(void)
{
	int a, b, c, d, e;				/*�ϐ��̐錾*/
	printf("3�̐�������͂��Ă��������B\n");	
	scanf("%d",&a);					/*3�̐����̓��͂�v��*/
	scanf(" %d",&b);
	scanf(" %d",&c);
	if(a>b){					/*a>b�ł���Ƃ���d��a��������*/
	d=a;
	}
	else{						/*b>a�ł���Ƃ���d��b��������*/
	d=b;
	}
	if(d>c){					/*d>c�ł���Ƃ���e��d��������*/
	e=d;						
	}
	else{						/*c>d�ł���Ƃ���e��c��������*/
	e=c;
	}
	printf("�R�̐�����%d",a);			/*���͓��e�̍ĕ\��*/
	printf(" %d",b);
	printf(" %d\n",c);
	printf("�ő�l��%d",e);				/*���ʂ̕\��*/
	return 0;
}
