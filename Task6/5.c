#include<stdio.h>

int main(void)
{
	char ch, CH;					/*�ϐ��̐錾ch������CH�ϊ���̑啶��*/
	printf("�p���̏���������͂��Ȃ�������");	
	ch = getchar();					/*�����̓���*/
	CH = ch - 0x20;					/*shift-jis�̏������R�[�h�́u�啶���̕����R�[�h�@0x20�v�ł���Ƃ������Ƃ��g���B*/
	printf("�p�啶������%c",CH);			/*���ʂ̕\��*/
	return 0;
}
