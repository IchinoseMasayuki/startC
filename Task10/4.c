#include<stdio.h>
#include<math.h>

int main(void){

	int i;			/*�J��Ԃ��p*/
	double r, h, n, V;	/*���͗p*/

	printf("��ʂ̔��a r����");	/*����*/
	scanf("%lf",&r);
	printf("���� h����");
	scanf("%lf",&h);
	printf("������ n����");
	scanf("%lf",&n);
	V=0;
					/*�������̍�����h/n*/
					/*��������i�Ԗڂ̒�ʂ̔��a��n-i/n*/
					/*��������i�Ԗڂ̖ʐς�(r*n-i/n)^2*��*h/n�ƂȂ�*/
	for(i=1;i<=n;i++){;
		V=V+pow((n-i)/(n)*r,2)*M_PI*h/n;
	}

	printf("�̐ρ���%.2f\n",V);
	return 0;
}
