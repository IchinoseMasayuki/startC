#include<stdio.h>

int main(void)
{
	int x, y, z, V, S;				/*  �ϐ��̐ݒ�  */
	printf("3�ӂ̒���x,y,z�́H\n");
	scanf("%d",&x);					/*�@��x�̓��́@*/
	scanf("%d",&y);					/*�@��y�̓��́@*/
	scanf("%d",&z);					/*�@��z�̓��́@*/
	V=x*y*z;					/*�@�̐�V�̌v�Z�@*/
	S=2*x*y+2*y*z+2*z*x;				/*�@�\�ʐ�S�̌v�Z�@*/
	printf("�����̂̂R�ӂ̒���x,y,z=>%d",x);	/*�@��x�̕\���@*/
	printf(" %d",y);				/*�@��y�̕\��  */
	printf(" %d\n",z);				/*  ��z�̕\��  */
	printf("�̐ρ�%d\n",V);				/*  �̐�V�̕\��  */
	printf("�\�ʐρ�%d\n",S);			/*  �\�ʐ�S�̕\��  */
	return 0;
}
