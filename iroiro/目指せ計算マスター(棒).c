#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*�ڎw���v�Z�}�X�^�[(�_)*/
int main(void)
{
	double t, tt, T;						/*t �J�n���ԁAtt�I�����ԁAT�I������*/
	int ans;							/*ans �������̕\��*/
	char c;								/*c ���[�h�I��p*/
	printf("�ڎw���v�Z�}�X�^�[�I\n");
	printf("+��-��*��I�����Ă��������B\n");
	c = getchar();

	/*�����Z�p*/
	if(c=='+'){
		int i, a, b, c;						/*i ���[�v�p�Aab �v�Z�p�Ac �𓚗p*/
		srand((unsigned int)time(NULL));			/*rand�֐���time�֐��ɂ���ď�����*/
		ans = 0;
		printf("�撣���āIn");
		t = clock();						/*�J�n���Ԃ̐ݒ�*/
			for(i=0;i<10;i++){				/*���[�v�@10��s��*/
			a = rand();					/*a�ɗ�������*/
			b = rand();					/*b�ɗ�������*/
			printf("%d+",a);				/*�v�Z���e�̕\��*/
			printf("%d=",b);
			scanf("%d",&c);					/*�𓚂̓���*/
				if(c==a+b){				/*�����̏ꍇans+1*/
				ans = ans + 1;
				}
			}
	}								/*�J��Ԃ����I��*/

	/*3�������Z�p*/
	else if(c=='p'){
		int i, a, b, c, d;					/*i ���[�v�p�Aabd �v�Z�p�Ac �𓚗p*/
		srand((unsigned int)time(NULL));			/*rand�֐���time�֐��ɂ���ď�����*/
		ans = 0;
		printf("�撣���āI\n");
		t = clock();						/*�J�n���Ԃ̐ݒ�*/
			for(i=0;i<10;i++){				/*���[�v�@10��s��*/
			a = rand();					/*a�ɗ�������*/
			b = rand();					/*b�ɗ�������*/
			d = rand();
			printf("%d+",a);				/*�v�Z���e�̕\��*/
			printf("%d+",b);
			printf("%d=",d);
			scanf("%d",&c);					/*�𓚂̓���*/
				if(c==a+b+d){				/*�����̏ꍇans+1*/
				ans = ans + 1;
				}
			}
	}								/*�J��Ԃ����I��*/


	/*�����Z�p*/
	else if(c=='-'){
		int i, a, b, c;						/*i ���[�v�p�Aab �v�Z�p�Ac �𓚗p*/
		srand((unsigned int)time(NULL));			/*rand�֐���time�֐��ɂ���ď�����*/
		ans = 0;
		printf("�撣���āI\n");
		t = clock();						/*�J�n���Ԃ̐ݒ�*/
			for(i=0;i<10;i++){				/*���[�v�@10��s��*/
			a = rand();					/*a�ɗ�������*/
			b = rand();
				if(a>b){				/*b�ɗ�������*/
				printf("%d-",a);			/*�v�Z���e�̕\��*/
				printf("%d=",b);
				scanf("%d",&c);				/*�𓚂̓���*/
					if(c==a-b){				/*�����̏ꍇans+1*/
					ans = ans + 1;
					}
				}

				else{
				printf("%d-",b);			/*�v�Z���e�̕\��*/
				printf("%d=",a);
				scanf("%d",&c);				/*�𓚂̓���*/
					if(c==b-a){			/*�����̏ꍇans+1*/
					ans = ans + 1;
					}
				}
			}						/*�J��Ԃ����I��*/
	}

	/*�|���Z�p*/
	else if(c=='*'){
		int i, a, b, c;					/*i ���[�v�p�Aab �v�Z�p�Ac �𓚗p*/
		srand((unsigned int)time(NULL));			/*rand�֐���time�֐��ɂ���ď�����*/
		ans = 0;
		printf("�撣���āI\n");
		t = clock();						/*�J�n���Ԃ̐ݒ�*/
			for(i=0;i<10;i++){				/*���[�v�@10��s��*/
			a = rand();					/*a�ɗ�������*/
			b = rand();					/*b�ɗ�������*/
			printf("%d*",a);				/*�v�Z���e�̕\��*/
			printf("%d=",b);
			scanf("%d",&c);					/*�𓚂̓���*/
				if(c==a*b){				/*�����̏ꍇans+1*/
				ans = ans + 1;
				}
			}
	}

	tt = clock();							/*�I�����Ԃ̑��*/
	T = (tt - t)/1000;						/*�I������-�J�n����*/
	printf("%d�␳�����܂����I",ans);				/*�������̕\��*/
	printf("%.2f�b������܂����I\n",T);				/*���Ԃ̕\��*/
	if(T<15){
		if(ans>8){
		printf("��������N�͌v�Z�}�X�^�[���I\n");
		}
	
		else if(ans>5){
		printf("�����Ɛ��m�ɍs�����I\n");
		}
	
		else{
		printf("���Ԃ������Ă����������Ă݂悤�I\n");
		}
	}
	else if(T<60){
		if(ans>8){
		printf("���������I\n");
		}
	
		else if(ans>5){
		printf("�����Ɛ��m�ɁI\n");
		}
	
		else{
		printf("��������撣�낤�I\n");
		}
	}
	else{
		if(ans>8){
		printf("���x�͂����Ƒ�������Ă݂悤�I\n");
		}
	
		else if(ans>5){
		printf("�����Ɛ��m�ɁI\n");
		}
	
		else{
		printf("��������撣�낤�I\n");
		}
	}
	return 0;
}
