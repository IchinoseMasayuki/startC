#include<stdio.h>

int main(void){
	/*�G�X�P�[�v�V�[�P���X�̕\��*/
	printf("�u\a�v�x����\n");
	printf("�u\b�v�o�b�N�X�y�[�X\n");
	printf("�u\t�v�����^�u\n");
	printf("�u\v�v�����^�u\n");
	printf("�u\n�v���s\n");
	printf("�u\f�v���y�[�W\n");
	printf("�u\r�v���A\n");
	printf("�u\'�v�A�|�X�g���t�B�[\n");
	printf("�u\"�v���p��\n");
	printf("�u\\�v�~�L��\n");
	printf("�u\?�v�N�G�X�`�����}�[�N\n");
	printf("�u\123�v8�i��123�̕����R�[�h��������\n");
	printf("�u\xab�v16�i��ab�̕����R�[�h��������\n");

	/*�����萔�̕\��*/
	printf("10�i����10��%d\n",10);
	printf(" 8�i����10��%d\n",010);
	printf("16�i����10��%d\n",0x10);

	return 0;
}
