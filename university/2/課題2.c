#include <stdio.h>

int main(void){

	int a,b;		/*�_���͐����Ȃ̂�int�^��p����*/
	int i;
	double c;		/*���ϓ_�͏����Ȃ̂ŁAdouble�^��p����B*/
	b=0;

	for(i=1;i<=5;i++){
		printf("�Ȗ�%d�̓_������͂��Ă��������B\n",i);
		scanf("%d",&a);
		b+=a;		/*b��a�����Z�������*/
	}
	
	c=b;			/*b��double�^�ϐ��Ɍ^�ϊ�����*/
	printf("5�Ȗڂ̍��v�_��%d�ł��B\n5�Ȗڂ̕��ϓ_��%f�ł��B",b,c/5);

	return 0;
}
