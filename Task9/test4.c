#include<stdio.h>

int main(void)
{
	int i;									/*�J��Ԃ��p*/
	int num;								/*���͗p*/
	int un;									/*13�܂ł̂Ƃ�*/
	printf("n����");							/*����*/
	scanf("%d",&num);
	if(num<=12){								/*int�֐���ŃI�[�o�[�t���[���Ȃ�12�܂�*/
		un=1;
		for(i=1;i<=num;i++){						/*���[�v*/
			un=un*i;
		}
	printf("%d�I��%d\n",num,un);
	}

	else if(num>12){							/*��x�ڂ̃I�[�o�[�t���[����������̂�int�֐���2�q����B*/
		int a, b, bb;							/*a:10^8�܂ł̐��Bb:10^8����10^16�܂ŁBbb:a�̌J��オ��̐��B*/
		a=1;					
		b=0;
		for(i=1;i<=num;i++){
			a=a*i;				
			b=b*i;	
			if(a>100000000){					/*a�̌J��グ�v�Z*/
				bb=a/100000000;					/*a��10^8�̈ʂ�b�ɒǉ�����B*/
				a=a-(bb*100000000);
				b=b+bb;
			}
		}
		if(num>=20){							/*��x�ڂ̃I�[�o�[�t���[*/
			int c, cc;						/*c:10^16����̐��Bcc:b�̌J��オ��̐��B*/
			a=1;				
			b=0;
			c=0;
				for(i=1;i<=num;i++){
					a=a*i;
					b=b*i;
					c=c*i;
					if(a>100000000){			/*a�̌J��グ�v�Z*/
						bb=a/100000000;
						a=a-(bb*100000000);
						b=b+bb;
					}
					if(b>100000000){			/*b�̌J��グ�v�Z*/
						cc=b/100000000;
						b=b-(cc*100000000);
						c=c+cc;
					}
				}			/*26��10^8��ł͕ϐ�a���I�[�o�[�t���[����B*/
		printf("%d�I��%d%08d%08d\n",num,c,b,a);
		}
		else if(num<=20){
			printf("%d�I��%d%08d\n",num,b,a);
		}
	}
	return 0;
}
