#include<stdio.h>

int main(void){

	const char *n[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	const char *m[]={"�K�[�l�b�g","�A���V�X�g","�A�N���}�����E�T���S","�_�C�������h","�G�������h�E�W�F�C�_�C�g�i�q�X�C�j","�^��E���[���X�g�[��","���r�[","�؃��h�b�g�E�T�[�h�I�j�b�N�X","�T�t�@�C�A","�I�p�[���E�g���}����","�g�p�[�Y�E�V�g����","�g���R�΁E���s�X���Y��"};/*�Q�l : http://www.jja.ne.jp/aboutjewellery/aboutjewellery_inner04.html*/
	int a, b;	/*�z���0����n�܂邽�ߓ��͂��ꂽa-1�œǂݍ���*/

	printf("�����ł�������");
	scanf("%d",&a);
	b=a-1;
	printf("%d���̃X�y���� %s �ł��B\n�a���΂� %s �ł��B\n",a,n[b], m[b]);
	return 0;
}
