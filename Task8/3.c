#include<stdio.h>

int main(void)
{
	int a, b, c, d, e, f;				/*�ϐ��̐錾*/
	d = 0;
	e = 0;
	f = 0;
	printf("3�̐�������͂��Ă��������B\n");	
	scanf("%d",&a);					/*3�̐����̓��͂�v��*/
	scanf(" %d",&b);
	scanf(" %d",&c);
	if(a>b){					/*a>b�ł���Ƃ���d��1��������*/
	d=1;
	}
	if(b>c){					/*b>c�ł���Ƃ���e��1��������*/
	e=1;						
	}
	if(c>a){					/*c>a�ł���Ƃ���f��1��������*/
	f=1;						
	}
	printf("�R�̐�������%d",a);			/*���͓��e�̍ĕ\��*/
	printf(" %d",b);
	printf(" %d\n",c);
	printf("�傫�����ɕ\\���@");			/*�ȉ����ʕ\��*/
	if(d==1){
		if(e==1){				/*d=1,e=1�̂Ƃ�a>b b>c���a>b>c*/
			printf("%d ",a);
			printf("%d ",b);
			printf("%d",c);
		}
		else if(f==1){				/*d=1,e=0,f=1�̂Ƃ�a>b,c<b,c>a���c>a>b*/
			printf("%d ",c);
			printf("%d ",a);
			printf("%d",b);
		}
		else{					/*d=1,e=0,f=0�̂Ƃ�a>b,c<b,c<a���a>c>b*/
			printf("%d ",a);
			printf("%d ",c);
			printf("%d",b);
		}
	}
	else
{
		if(f==0){				/*d=0,f=0�̂Ƃ�c>b,b>a���c>b>a*/
			printf("%d ",b);
			printf("%d ",a);
			printf("%d",c);
		}
		else if(e==1){				/*d=0,f=1,e=1�̂Ƃ�b>a,b>c,c>a���b>c>a*/
			printf("%d ",b);
			printf("%d ",c);
			printf("%d",a);
		}
		else{					/*d=0,f=1,e=1�̂Ƃ�b>a,b>c,a>c���b>a>c*/
			printf("%d ",c);
			printf("%d ",b);
			printf("%d",a);
		}
	}
	return 0;
}
