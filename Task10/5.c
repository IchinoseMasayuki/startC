#include<stdio.h>

int main(void){

	int a, b, ab, c;			/*ab��a/b�̐�������*/

	printf("���la����");			/*����/*/
	scanf("%d",&a);
	printf("���lb����");
	scanf("%d",&b);
	ab=a/b;					/*ab�̌v�Z*/
	c=a-ab*b;				/*a/b�̐��������~b��b�Ŋ������Ƃ��̏��ł��邽�߁Aa��������Ɨ]�肪���Ƃ܂�*/
	while(c!=0){;
		a=b;				/*b=>a*/
		b=c;				/*c=>b*/
		ab=a/b;
		c=a-ab*b;
	}

	printf("�ő���񐔁���%d\n",b);		/*���ʂ̏o��*/
	return 0;
}
